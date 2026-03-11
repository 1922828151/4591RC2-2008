/*
 * func-name: sub_1005FCB0
 * func-address: 0x1005fcb0
 * callers: 0x1005fd50, 0x1005fed0
 * callees: none
 */

int __thiscall sub_1005FCB0(int this, unsigned __int16 a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // edx
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // edx
  int v8; // esi
  int result; // eax

  v4 = *(_DWORD *)(this + 24);
  v5 = 44 * a2;
  *(_DWORD *)(v5 + v4 + 16) = *a3;
  v6 = v5 + v4 + 16;
  *(_DWORD *)(v6 + 4) = a3[1];
  *(_DWORD *)(v6 + 8) = a3[2];
  v7 = (_DWORD *)(v5 + *(_DWORD *)(this + 24) + 28);
  *v7 = *a4;
  v7[1] = a4[1];
  v7[2] = a4[2];
  v8 = v5 + *(_DWORD *)(this + 24);
  result = (*(int (__thiscall **)(_DWORD, _DWORD, int, int))(**(_DWORD **)(this + 56) + 8))(
             *(_DWORD *)(this + 56),
             a2,
             v8 + 16,
             v8 + 28);
  *(_WORD *)(v8 + 12) = result;
  return result;
}
