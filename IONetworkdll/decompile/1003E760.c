/*
 * func-name: ?handle_write_stream@Accept_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x1003e760
 * callers: none
 * callees: 0x10004050, 0x100040d0, 0x1004e861
 */

char *__thiscall Outpop::IONetwork::Accept_Bluider_Process::handle_write_stream(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  int v7; // [esp+0h] [ebp-68h]
  _BYTE v8[64]; // [esp+Ch] [ebp-5Ch] BYREF
  int v9; // [esp+4Ch] [ebp-1Ch]
  int v10; // [esp+50h] [ebp-18h]
  int v11; // [esp+64h] [ebp-4h]

  Outpop::IONetwork::IO_Channel_Config::IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v8);
  v11 = 0;
  v3 = this[4];
  v10 = this[5];
  v7 = this[3];
  v4 = this[2];
  v9 = v3;
  v5 = this[1];
  this[4] = 0;
  (*(void (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)v5 + 20))(v5, v8, v4, v7);
  v11 = -1;
  return Outpop::IONetwork::IO_Channel_Config::~IO_Channel_Config((Outpop::IONetwork::IO_Channel_Config *)v8);
}
