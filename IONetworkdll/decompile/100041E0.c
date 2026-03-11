/*
 * func-name: ??4IO_Channel_Config@IONetwork@Outpop@@QAEAAU012@ABU012@@Z
 * func-address: 0x100041e0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::IO_Channel_Config::operator=(_DWORD *this, int a2)
{
  char *v3; // ebp
  _DWORD *v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // ebx
  _DWORD *v7; // eax

  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  v3 = (char *)(this + 2);
  v4 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 8) + 16))(a2 + 8);
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(_DWORD *)v3 + 16))(this + 2);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(a2 + 36) + 16))(a2 + 36);
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[9] + 16))(this + 9);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  this[16] = *(_DWORD *)(a2 + 64);
  this[17] = *(_DWORD *)(a2 + 68);
  *((_BYTE *)this + 72) = *(_BYTE *)(a2 + 72);
  return this;
}
