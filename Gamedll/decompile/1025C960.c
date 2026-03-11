/*
 * func-name: sub_1025C960
 * func-address: 0x1025c960
 * callers: 0x1000af92
 * callees: 0x10018aa2
 */

char __thiscall sub_1025C960(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  double v6; // st6
  double v7; // st4
  bool v8; // c0
  bool v9; // c3
  double v10; // st6
  int v11; // edi
  char v12; // fps^1
  double v13; // st5
  bool v14; // c0
  char v15; // c2
  bool v16; // c3
  char v17; // ah
  double v18; // st6
  bool v19; // c0
  bool v20; // c3
  int v21; // ebx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  _DWORD **v29; // edi
  Input *v30; // eax
  int v31; // edi
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  _DWORD **v36; // edi
  Input *v37; // eax
  char result; // al
  int v39; // edi
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // [esp+0h] [ebp-18h]
  int v44; // [esp+0h] [ebp-18h]
  float v45; // [esp+14h] [ebp-4h]
  float v46; // [esp+14h] [ebp-4h]
  float v47; // [esp+14h] [ebp-4h]
  float v48; // [esp+14h] [ebp-4h]
  float v49; // [esp+14h] [ebp-4h]

  v45 = *(float *)(Input::Instance(v43) + 1716);
  v2 = *(float *)(Input::Instance(v44) + 1712);
  v3 = v2 - *(float *)(this + 3908);
  if ( v3 * v3 + v45 - *(float *)(this + 3912) <= 225.0 )
  {
    v11 = 6;
  }
  else
  {
    v4 = v45;
    v46 = v45 - *(float *)(this + 3912);
    v47 = fabs(v46);
    v5 = v3;
    v6 = v47;
    v48 = v5;
    v49 = fabs(v48);
    v7 = v49 * 0.33;
    v8 = v7 < v6;
    v9 = v7 == v6;
    v10 = v4;
    if ( v8 || v9 )
    {
      v13 = *(float *)(this + 3912);
      v14 = v13 < v10;
      v15 = 0;
      v16 = v13 == v10;
      v17 = v12;
      v18 = *(float *)(this + 3908);
      v19 = v18 < v2;
      v20 = v18 == v2;
      if ( (v17 & 0x41) != 0 )
      {
        if ( v19 || v20 )
          v11 = 5;
        else
          v11 = 4;
      }
      else
      {
        v11 = v19 || v20;
      }
    }
    else if ( *(float *)(this + 3908) <= v2 )
    {
      v11 = 3;
    }
    else
    {
      v11 = 2;
    }
  }
  v21 = *(_DWORD *)(this + 3892);
  if ( v11 != v21 )
  {
    v22 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v21);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v22 + 136))(v22, 1);
    v23 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v21 + 28);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v23 + 136))(v23, 0);
    v24 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v21 + 56);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 136))(v24, 0);
    v25 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v11);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v25 + 136))(v25, 0);
    v26 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v11 + 28);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v26 + 136))(v26, 1);
    v27 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v11 + 56);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v27 + 136))(v27, 0);
    *(_DWORD *)(this + 3892) = v11;
  }
  v28 = *(_DWORD *)(dword_103B67B4 + 8);
  v29 = (_DWORD **)(dword_103B67B4 + 8);
  if ( !v28 || !((*(_DWORD *)(dword_103B67B4 + 12) - v28) >> 2) )
    _invalid_parameter_noinfo();
  v30 = (Input *)Input::Instance(**v29);
  if ( Input::ControlJustPressed(v30) )
  {
    v31 = *(_DWORD *)(this + 3892);
    v32 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v31);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v32 + 136))(v32, 0);
    v33 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v31 + 28);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 136))(v33, 0);
    v34 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v31 + 56);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v34 + 136))(v34, 1);
  }
  v35 = *(_DWORD *)(dword_103B67B4 + 8);
  v36 = (_DWORD **)(dword_103B67B4 + 8);
  if ( !v35 || !((*(_DWORD *)(dword_103B67B4 + 12) - v35) >> 2) )
    _invalid_parameter_noinfo();
  v37 = (Input *)Input::Instance(**v36);
  result = Input::ControlJustReleased(v37);
  if ( result )
  {
    v39 = *(_DWORD *)(this + 3892);
    v40 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v39);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v40 + 136))(v40, 1);
    v41 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v39 + 28);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v41 + 136))(v41, 0);
    v42 = *(_DWORD *)(*(_DWORD *)(this + 3872) + 4 * v39 + 56);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v42 + 136))(v42, 0);
    return sub_10018AA2(*(_DWORD *)(this + 3892));
  }
  return result;
}
