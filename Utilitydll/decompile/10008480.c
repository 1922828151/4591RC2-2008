/*
 * func-name: sub_10008480
 * func-address: 0x10008480
 * callers: 0x10008000, 0x1000e1d0, 0x10014d20
 * callees: 0x10008fb0, 0x10018b90
 */

_DWORD *__usercall sub_10008480@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // edi
  _DWORD *result; // eax

  v2 = *(_DWORD **)(a2 + 4);
  v3 = *v2;
  v4 = sub_10018B90(*v2, *(_DWORD *)(*v2 + 4), a1);
  sub_10008FB0();
  *(_DWORD *)(v3 + 4) = v4;
  result = *(_DWORD **)(v4 + 4);
  *result = v4;
  return result;
}
