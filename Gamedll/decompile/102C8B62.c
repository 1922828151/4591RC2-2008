/*
 * func-name: ?CreateControllerActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JABVBBox@@ABVMatrix@@MPAVPhysicsController_Callback@@M@Z
 * func-address: 0x102c8b62
 * callers: none
 * callees: none
 */

// attributes: thunk
struct NxActor *__thiscall NxPhysics::CreateControllerActor(
        NxPhysics *this,
        struct Actor *a2,
        int a3,
        const struct BBox *a4,
        const struct Matrix *a5,
        float a6,
        struct PhysicsController_Callback *a7,
        float a8)
{
  return __imp_?CreateControllerActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JABVBBox@@ABVMatrix@@MPAVPhysicsController_Callback@@M@Z(
           this,
           a2,
           a3,
           a4,
           a5);
}
