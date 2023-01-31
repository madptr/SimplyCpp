# Building a library using function pointers
Why do we need to implement a library using function pointers? It is particularly useful in game/graphics development because we have to target different platforms and APIs. We can't rewrite the game for every platform we port to. Thus, the platform-specific functionalities and API-specific functionalities can be redirected using function pointers. In this way, we can use it for building a cross-platform library, or a renderer that targets different Graphics APIs. 
> It is not the only method

In the previous [function pointer example](functionPointers/01functionPointers) the function pointers were pointing to different functions in the project and all the calls were from the same project. Comparatively, the major difference is, the pointers are exposed to an external system. The pointers are set based on the need of the external system. 

The idea of function pointers never changes. In a nutshell, it is a pointer and points to any assigned function. The parameters and return types should match. It can be used for any purpose.

## Principle
This works in multiple ways, here is one of the ways we can implement a library based on function pointers. This kind of technique is extensively used in the game Quake and in the cross-platform game development framework TheForge.

> I think it is Quake III, where almost all of the game's functionalities are exposed via function pointers and all assignments are managed based on options and game modes. It is quite a task to understand which function is getting called etc. The source in available in GitHub
## Externs
First, we expose the pointers to the calling application, here to the *functionPointer/main.cpp*. Two function pointers are considered here. *init* and *functionality*. Both are declared as **extern** variables in a file which will be included in multiple instances both inside the project and outside the project (the calling application). The use of the *extern* keyword circumvents the problem of multiple definitions. It informs the compiler that this particular function or variable will be declared and eventually defined at some other location of the project. Thus no actual definition is done by the compiler until now.

## Assigning values to the pointers
The extern function pointers are declared in a different file *xAbstractFunctionality.cpp*. The functions that will assign the values to those function pointers can be declared as *extern*s in this *cpp*. Whereas in this example they are declared in the *.h* of the same file. 

The functions that will assign values can be called based on any criteria, here a simple *switch case* functionality is employed for that purpose. It calls these functions depending on the *case k_A* or *case k_B* as requested by the caller.

The definition of these new externs, that will assign will be defined in the respective *cpp* of those functionalities. Here they are *xFunctionalityA* and *xFunctionalityB*. 

## Application
Think of it as a *VulkanRenderer* and a *DirectxRenderer* whereas the *xAbstractFunctionality* is a *Renderer*. 

The external entity (game or any other application), can call a *draw* functionality exposed by the renderer. Based on our initial setting, the *draw* will be redirected to a *'Vulkan'Draw* or a *'DirectX'Draw*.