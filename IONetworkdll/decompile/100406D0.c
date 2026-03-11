/*
 * func-name: ?handle_write_stream@Dgram_Accept_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100406d0
 * callers: none
 * callees: 0x10004050, 0x100040d0, 0x1004e861
 */

char *__thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::handle_write_stream(int this, int a2)
{
  int v3; // edx
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  Outpop::Utility::Ref_Object *v6; // ecx
  int v7; // eax
  Outpop::Utility::Ref_Object *v8; // ecx
  Outpop::Utility::Ref_Object *v10; // [esp+0h] [ebp-6Ch] BYREF
  Outpop::Utility::Ref_Object **v11; // [esp+10h] [ebp-5Ch] BYREF
  char v12[36]; // [esp+14h] [ebp-58h] BYREF
  _DWORD v13[9]; // [esp+38h] [ebp-34h] BYREF
  int v14; // [esp+68h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+6Ch] [ebp+0h]

  Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)&v11);
  v14 = 0;
  v3 = *(_DWORD *)(this + 8);
  v13[6] = *(_DWORD *)(this + 44);
  v4 = (_DWORD *)(*(int (__thiscall **)(int, Outpop::Utility::Ref_Object *))(v3 + 16))(this + 8, v10);
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v13[0] + 16))(v13);
  *v5 = *v4;
  v5[1] = v4[1];
  v6 = (Outpop::Utility::Ref_Object *)v4[2];
  v5[2] = v6;
  v5[3] = v4[3];
  v7 = *(_DWORD *)(this + 56);
  v10 = v6;
  v8 = *(Outpop::Utility::Ref_Object **)(this + 64);
  v13[8] = v7;
  *(_DWORD *)(this + 44) = 0;
  v11 = &v10;
  v10 = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  LOBYTE(retaddr) = 0;
  (*(void (__thiscall **)(_DWORD, char *, _DWORD, _DWORD))(**(_DWORD **)(this + 48) + 20))(
    *(_DWORD *)(this + 48),
    v12,
    *(_DWORD *)(this + 36),
    *(_DWORD *)(this + 40));
  v14 = -1;
  return Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)&v11);
}
