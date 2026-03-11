/*
 * func-name: sub_10061E30
 * func-address: 0x10061e30
 * callers: 0x100606b0
 * callees: 0x10060f60, 0x10061520, 0x1016a2f0, 0x101a2500, 0x101a2522
 */

unsigned int __thiscall sub_10061E30(int this, unsigned int a2)
{
  int v3; // ecx
  unsigned int result; // eax
  char *v5; // ebx
  _WORD *v6; // eax
  bool v7; // cc
  _WORD *v8; // edi
  int v9; // eax
  int v10; // edi
  int v11; // [esp+0h] [ebp-28h] BYREF
  void *v12; // [esp+Ch] [ebp-1Ch]
  _WORD *v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]
  int *v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+24h] [ebp-4h]

  v15 = &v11;
  if ( a2 > 0x7FFFFFFF )
    sub_10060F60();
  v3 = *(_DWORD *)(this + 4);
  if ( v3 )
    result = (*(_DWORD *)(this + 12) - v3) >> 1;
  else
    result = 0;
  if ( result < a2 )
  {
    v5 = (char *)sub_1016A2F0(a2);
    v6 = *(_WORD **)(this + 8);
    v7 = *(_DWORD *)(this + 4) <= (unsigned int)v6;
    v12 = v5;
    v16 = 0;
    v13 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_WORD **)(this + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(this + 8) )
      invalid_parameter_noinfo();
    LOBYTE(v14) = 0;
    sub_10061520(v8, v13, v5);
    v9 = *(_DWORD *)(this + 4);
    if ( v9 )
      v10 = (*(_DWORD *)(this + 8) - v9) >> 1;
    else
      v10 = 0;
    if ( v9 )
      operator delete(*(void **)(this + 4));
    result = a2;
    *(_DWORD *)(this + 12) = &v5[2 * a2];
    *(_DWORD *)(this + 8) = &v5[2 * v10];
    *(_DWORD *)(this + 4) = v5;
  }
  return result;
}
