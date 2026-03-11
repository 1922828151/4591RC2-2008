/*
 * func-name: ?Initialize@Script@@QAEXPAVActor@@PAVWorld@@AAVMatrix@@@Z
 * func-address: 0x10118d20
 * callers: 0x101198c0, 0x1012ffd0
 * callees: 0x10097800, 0x10119160
 */

void __thiscall Script::Initialize(Script *this, struct Actor *a2, struct World *a3, struct Matrix *a4)
{
  int v5; // eax
  const char *v6; // eax

  if ( *(_DWORD *)this != -1 )
  {
    PyCObject_FromVoidPtrAndDesc(a4, "_p_Matrix", 0);
    PyCObject_FromVoidPtrAndDesc(a2, "_p_Actor", 0);
    PyCObject_FromVoidPtrAndDesc(a3, "_p_World", 0);
    v5 = PyCObject_FromVoidPtrAndDesc(this, "_p_Script", 0);
    if ( !PyObject_CallMethod(*((_DWORD *)this + 33), "Init", "OOOO", v5) )
    {
      v6 = (const char *)sub_10119160();
      Warning(
        "Class %s's Initialization failed.\n classObj = 0x%x\n Python traceback: %s",
        (const char *)this + 4,
        *((_DWORD *)this + 33),
        v6);
      *(_DWORD *)this = -1;
    }
  }
}
