/*
 * func-name: ?MoveController@NxPhysics@@QAEXPAVNxActor@@AAVVector@@@Z
 * func-address: 0x10141230
 * callers: none
 * callees: 0x1003e7b0, 0x100956d0, 0x10100b70
 */

void __thiscall NxPhysics::MoveController(NxPhysics *this, struct NxActor *a2, struct Vector *a3)
{
  struct NxActor *v3; // esi
  float *v4; // edi
  float *v5; // esi
  bool v6; // c0
  double v7; // st7
  int v8; // ebp
  float *v9; // eax
  double v10; // st7
  int *v11; // ecx
  void (__thiscall ***v12)(_DWORD, float *); // ecx
  unsigned int v13; // ecx
  __int64 v14; // [esp+20h] [ebp-34h]
  float v15; // [esp+30h] [ebp-24h]
  float v16; // [esp+34h] [ebp-20h]
  float v17; // [esp+34h] [ebp-20h]
  float v18; // [esp+38h] [ebp-1Ch]
  float v19; // [esp+3Ch] [ebp-18h] BYREF
  float v20; // [esp+40h] [ebp-14h]
  float v21; // [esp+44h] [ebp-10h]
  float v22; // [esp+48h] [ebp-Ch] BYREF
  float v23; // [esp+4Ch] [ebp-8h]
  float v24; // [esp+50h] [ebp-4h]

  v3 = a2;
  if ( a2 && (*(unsigned __int8 (__thiscall **)(struct NxActor *))(*(_DWORD *)a2 + 116))(a2) )
  {
    v4 = (float *)a3;
    if ( *(float *)a3 > 99999.0
      || *(float *)a3 < -99999.0
      || *((float *)a3 + 1) > 99999.0
      || *((float *)a3 + 1) < -99999.0
      || *((float *)a3 + 2) > 99999.0
      || *((float *)a3 + 2) < -99999.0 )
    {
      Error("Ctl Pos: %.2f, %.2f, %.2f", *(float *)a3, *((float *)a3 + 1), *((float *)a3 + 2));
    }
    if ( (*(unsigned __int16 (__thiscall **)(struct NxActor *))(*(_DWORD *)v3 + 88))(v3) == 5 )
    {
      v5 = *(float **)(*((_DWORD *)v3 + 1) + 12);
      v6 = v5[1] > 0.0;
      *((_BYTE *)v5 + 25) = 0;
      if ( v6 )
        v4[1] = v4[1] - GDeltaTime * 10.0;
      if ( v4[1] > 100.0 )
        v4[1] = 100.0;
      v7 = *v4;
      a2 = 0;
      v22 = v7 * GDeltaTime;
      v23 = v4[1] * GDeltaTime;
      v24 = GDeltaTime * v4[2];
      v8 = **(_DWORD **)v5;
      v9 = NxHelper::ToNxVec3(&v19, &v22);
      (*(void (__thiscall **)(_DWORD, float *, int, _DWORD, struct NxActor **, _DWORD, _DWORD))(v8 + 4))(
        *(_DWORD *)v5,
        v9,
        61742,
        0.000099999997,
        &a2,
        1.0,
        0);
      if ( *((_BYTE *)v5 + 25) && v5[2] >= (double)v5[8] && v5[8] > 0.0 && v23 <= 0.0 )
      {
        v10 = v5[8] * 0.0;
        v19 = v10 - v5[9] * -1.0;
        v20 = v5[9] * 0.0 - 0.0 * v5[7];
        v21 = -1.0 * v5[7] - v10;
        v15 = v5[9] * v20 - v21 * v5[8];
        v16 = v21 * v5[7] - v5[9] * v19;
        v18 = v19 * v5[8] - v20 * v5[7];
        v17 = v16 * 0.8999999761581421;
        *(float *)&a3 = sub_1003E7B0(&v22);
        v11 = *(int **)v5;
        v14 = *(unsigned int *)v5;
        v19 = v15 * *(float *)&a3;
        v20 = *(float *)&a3 * v17;
        v21 = *(float *)&a3 * v18;
        (*(void (__stdcall **)(float *, int, _DWORD, struct NxActor **, _DWORD, _DWORD))(*v11 + 4))(
          &v19,
          61742,
          0.000099999997,
          &a2,
          1.0,
          HIDWORD(v14));
      }
      if ( ((unsigned __int8)a2 & 4) != 0 )
      {
        if ( !*((_BYTE *)v5 + 24) )
        {
          v12 = (void (__thiscall ***)(_DWORD, float *))*((_DWORD *)v5 + 14);
          if ( v12 )
            (**v12)(v12, v4);
          *((_BYTE *)v5 + 24) = 1;
        }
        v4[1] = -10.0;
      }
      else if ( *((_BYTE *)v5 + 24) )
      {
        v13 = *((_DWORD *)v5 + 14);
        *((_BYTE *)v5 + 24) = 0;
        if ( v13 )
          (*(void (__thiscall **)(unsigned int, float *))(*(_DWORD *)v13 + 4))(v13, v4);
      }
    }
  }
}
