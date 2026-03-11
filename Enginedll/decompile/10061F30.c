/*
 * func-name: sub_10061F30
 * func-address: 0x10061f30
 * callers: 0x100608d0
 * callees: 0x1001b350, 0x1001e620, 0x10060fe0, 0x101a2500, 0x101a2522
 */

unsigned int __thiscall sub_10061F30(int this, unsigned int a2)
{
  int v3; // ecx
  unsigned int result; // eax
  char *v5; // ebx
  _DWORD *v6; // eax
  bool v7; // cc
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // [esp+0h] [ebp-28h] BYREF
  void *v12; // [esp+Ch] [ebp-1Ch]
  _DWORD *v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+24h] [ebp-4h]

  v15 = &v11;
  if ( a2 > 0xFFFFFFF )
    sub_10060FE0();
  v3 = *(_DWORD *)(this + 4);
  if ( v3 )
    result = (*(_DWORD *)(this + 12) - v3) >> 4;
  else
    result = 0;
  if ( result < a2 )
  {
    v5 = (char *)sub_1001B350(a2);
    v6 = *(_DWORD **)(this + 8);
    v7 = *(_DWORD *)(this + 4) <= (unsigned int)v6;
    v12 = v5;
    v16 = 0;
    v13 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD **)(this + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(this + 8) )
      invalid_parameter_noinfo();
    LOBYTE(v14) = 0;
    sub_1001E620(v8, v13, v5);
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v10 = (*(_DWORD *)(this + 8) - v9) >> 4;
    else
      v10 = 0;
    if ( v9 )
      operator delete(*(void **)(this + 4));
    result = (unsigned int)&v5[16 * a2];
    *(_DWORD *)(this + 12) = result;
    *(_DWORD *)(this + 8) = &v5[16 * v10];
    *(_DWORD *)(this + 4) = v5;
  }
  return result;
}
