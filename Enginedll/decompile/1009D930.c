/*
 * func-name: ?FixNames@ModelFrame@@QAEXPAVWorld@@_N@Z
 * func-address: 0x1009d930
 * callers: 0x1007ea80, 0x10080a00, 0x100846a0, 0x10085820, 0x1009d930, 0x100ea5d0, 0x101658e0
 * callees: 0x1009d930, 0x10137a00, 0x1017ad40
 */

void __thiscall ModelFrame::FixNames(ModelFrame **this, struct World *a2, bool a3)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  bool v5; // bl
  int v6; // eax
  ModelFrame *v7; // ecx
  ModelFrame *v8; // ecx
  char v9; // [esp-30h] [ebp-74h] BYREF
  int v10[6]; // [esp-2Ch] [ebp-70h] BYREF
  ModelFrame **v11; // [esp-14h] [ebp-58h]
  char v12[28]; // [esp+0h] [ebp-44h] BYREF
  char v13[28]; // [esp+1Ch] [ebp-28h] BYREF
  struct _EXCEPTION_REGISTRATION_RECORD *v14; // [esp+38h] [ebp-Ch]
  void *v15; // [esp+3Ch] [ebp-8h]
  int v16; // [esp+40h] [ebp-4h]

  v16 = -1;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v15 = &loc_101AC5B2;
  v14 = ExceptionList;
  std::string::operator=(this + 18, &unk_101C46CB);
  v5 = a3;
  if ( !a3 || !std::string::length(this + 11) )
  {
    std::string::string(v12, this + 11);
    v16 = 0;
    do
    {
      std::string::string(v10, v12);
      v6 = sub_1017AD40(v13, v10[0]);
      LOBYTE(v16) = 1;
      std::string::operator=(v12, v6);
      LOBYTE(v16) = 0;
      std::string::~string(v13);
      v11 = this;
      std::string::string(&v9, v12);
    }
    while ( World::FindMeshFrame(v9, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], (struct ModelFrame *)v11) );
    std::string::operator=(this + 11, v12);
    v16 = -1;
    std::string::~string(v12);
    v5 = a3;
  }
  v7 = this[89];
  if ( v7 )
    ModelFrame::FixNames(v7, a2, v5);
  v8 = this[90];
  if ( v8 )
    ModelFrame::FixNames(v8, a2, v5);
}
