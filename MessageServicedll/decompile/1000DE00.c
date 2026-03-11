/*
 * func-name: sub_1000DE00
 * func-address: 0x1000de00
 * callers: 0x1000dd50
 * callees: 0x10002c00, 0x1000ba00, 0x1000dea0, 0x100295c0
 */

_DWORD *__usercall sub_1000DE00@<eax>(_DWORD *a1@<ebx>)
{
  void *v1; // eax
  void *v2; // eax
  int *v3; // eax
  int v4; // esi
  _DWORD *v5; // edi
  _DWORD *result; // eax
  void *v7; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v1 = operator new(8u);
  v7 = v1;
  v8 = 0;
  if ( v1 )
    v2 = (void *)sub_1000DEA0(v1);
  else
    v2 = 0;
  v8 = -1;
  v7 = v2;
  v3 = (int *)a1[1];
  v4 = *v3;
  v5 = sub_10002C00(*v3, *(_DWORD *)(*v3 + 4), &v7);
  sub_1000BA00(a1);
  *(_DWORD *)(v4 + 4) = v5;
  result = (_DWORD *)v5[1];
  *result = v5;
  return result;
}
