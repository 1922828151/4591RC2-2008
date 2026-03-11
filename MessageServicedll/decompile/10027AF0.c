/*
 * func-name: sub_10027AF0
 * func-address: 0x10027af0
 * callers: 0x100250e0
 * callees: 0x10027b80
 */

int __usercall sub_10027AF0@<eax>(int a1@<edx>, int a2@<esi>)
{
  int v2; // ecx
  int result; // eax
  _DWORD v4[3]; // [esp+0h] [ebp-18h] BYREF
  _BYTE v5[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(a2 + 44);
  v4[1] = Outpop::Message::Message_Facade::stop_acceptor;
  v4[0] = v2;
  v4[2] = a1;
  sub_10027B80(a2 + 4, v5, v4);
  result = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a2 + 44) = result + 1;
  return result;
}
