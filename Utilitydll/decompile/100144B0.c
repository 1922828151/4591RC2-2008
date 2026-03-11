/*
 * func-name: sub_100144B0
 * func-address: 0x100144b0
 * callers: 0x100121f0
 * callees: 0x10008fb0, 0x10014740, 0x10018b90, 0x10018e10
 */

_DWORD *__usercall sub_100144B0@<eax>(_DWORD *a1@<ebx>)
{
  void *v1; // eax
  void *v2; // eax
  _DWORD *v3; // eax
  int v4; // esi
  int v5; // edi
  _DWORD *result; // eax
  void *v7; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v1 = operator new(8u);
  v7 = v1;
  v8 = 0;
  if ( v1 )
    v2 = (void *)sub_10014740(v1);
  else
    v2 = 0;
  v8 = -1;
  v7 = v2;
  v3 = (_DWORD *)a1[1];
  v4 = *v3;
  v5 = sub_10018B90(*v3, *(_DWORD *)(*v3 + 4), &v7);
  sub_10008FB0(a1);
  *(_DWORD *)(v4 + 4) = v5;
  result = *(_DWORD **)(v5 + 4);
  *result = v5;
  return result;
}
