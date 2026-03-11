/*
 * func-name: sub_10008080
 * func-address: 0x10008080
 * callers: 0x100040d0
 * callees: 0x10008580, 0x10008fb0, 0x10018b90, 0x10018e10
 */

_DWORD *__usercall sub_10008080@<eax>(int a1@<ebx>)
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
    v2 = (void *)sub_10008580(v1);
  else
    v2 = 0;
  v8 = -1;
  v7 = v2;
  v3 = *(_DWORD **)(a1 + 4);
  v4 = *v3;
  v5 = sub_10018B90(*v3, *(_DWORD *)(*v3 + 4), &v7);
  sub_10008FB0();
  *(_DWORD *)(v4 + 4) = v5;
  result = *(_DWORD **)(v5 + 4);
  *result = v5;
  return result;
}
