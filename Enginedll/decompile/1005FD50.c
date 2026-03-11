/*
 * func-name: sub_1005FD50
 * func-address: 0x1005fd50
 * callers: none
 * callees: 0x1005fa40
 */

_DWORD *__thiscall sub_1005FD50(int this, unsigned __int16 a2, float *a3, float *a4)
{
  int v4; // eax
  _DWORD *result; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+8h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-10h]
  float v11[3]; // [esp+10h] [ebp-Ch] BYREF
  _DWORD *v12; // [esp+20h] [ebp+4h]

  v9 = 44 * a2;
  v4 = *(_DWORD *)(this + 20) + v9;
  v10 = v4;
  if ( *(_WORD *)(v4 + 12) == 0xFFFF )
    return (_DWORD *)sub_1005FCB0(this - 4, a2, a3, a4);
  v11[0] = 64.0;
  v11[1] = flt_10280DE8;
  v11[2] = 64.0;
  v12 = (_DWORD *)(v4 + 16);
  if ( sub_1005FA40(a3, (float *)(v4 + 16), v11) && sub_1005FA40(a4, (float *)(v10 + 28), v11) )
  {
    *v12 = *(_DWORD *)a3;
    v12[1] = *((_DWORD *)a3 + 1);
    v12[2] = *((_DWORD *)a3 + 2);
    result = (_DWORD *)(*(_DWORD *)(this + 20) + v9 + 28);
    *result = *(_DWORD *)a4;
    result[1] = *((_DWORD *)a4 + 1);
    result[2] = *((_DWORD *)a4 + 2);
  }
  else
  {
    *v12 = *(_DWORD *)a3;
    v12[1] = *((_DWORD *)a3 + 1);
    v12[2] = *((_DWORD *)a3 + 2);
    v6 = *(_DWORD *)(this + 20);
    *(float *)(v6 + v9 + 28) = *a4;
    v7 = v6 + v9 + 28;
    *(float *)(v7 + 4) = a4[1];
    *(float *)(v7 + 8) = a4[2];
    return (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, float *, float *))(**(_DWORD **)(this + 52) + 16))(
                       *(_DWORD *)(this + 52),
                       *(unsigned __int16 *)(*(_DWORD *)(this + 20) + v9 + 12),
                       a3,
                       a4);
  }
  return result;
}
