/*
 * func-name: ?ResizeController@NxPhysics@@QAE_NPAVNxActor@@ABVVector@@@Z
 * func-address: 0x10141500
 * callers: none
 * callees: 0x100956d0
 */

char __thiscall NxPhysics::ResizeController(NxPhysics *this, struct NxActor *a2, const struct Vector *a3)
{
  float *v5; // edi
  int v6; // ebx
  double v7; // st5
  float v8; // [esp+28h] [ebp+4h]
  float v9; // [esp+2Ch] [ebp+8h]

  if ( (*(unsigned __int16 (__thiscall **)(struct NxActor *))(*(_DWORD *)a2 + 88))(a2) != 5 )
    return 0;
  if ( *(float *)a3 > 99999.0
    || *(float *)a3 < -99999.0
    || *((float *)a3 + 1) > 99999.0
    || *((float *)a3 + 1) < -99999.0
    || (v5 = (float *)((char *)a3 + 8), *((float *)a3 + 2) > 99999.0)
    || *v5 < -99999.0 )
  {
    v5 = (float *)((char *)a3 + 8);
    Error("Ctl Extent: %.2f, %.2f, %.2f", *(float *)a3, *((float *)a3 + 1), *((float *)a3 + 2));
  }
  v6 = **(_DWORD **)(*((_DWORD *)a2 + 1) + 12);
  if ( *v5 <= (double)*(float *)a3 )
    v5 = (float *)a3;
  v7 = *v5;
  v9 = *((float *)a3 + 1) - v7;
  v8 = v7 * 0.5;
  if ( v9 < 0.0099999998 )
  {
    v9 = 0.0099999998;
    v8 = 0.5 * *((float *)a3 + 1);
  }
  (*(void (__thiscall **)(int, float))(*(_DWORD *)v6 + 72))(v6, COERCE_FLOAT(LODWORD(v9)));
  (*(void (__thiscall **)(int, float))(*(_DWORD *)v6 + 60))(v6, COERCE_FLOAT(LODWORD(v8)));
  return 1;
}
