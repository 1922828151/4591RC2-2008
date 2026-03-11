/*
 * func-name: ??4INET_Addr@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10003930
 * callers: 0x1001c940, 0x1001d570, 0x1001dec0, 0x100216e0, 0x10022310, 0x1002ad90, 0x1002b250, 0x1003a5b0, 0x1003aa70, 0x10040f80, 0x100440d0
 * callees: none
 */

void *__thiscall Outpop::IONetwork::INET_Addr::operator=(void *this, int a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 16))(a2);
  v4 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 16))(this);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  return this;
}
