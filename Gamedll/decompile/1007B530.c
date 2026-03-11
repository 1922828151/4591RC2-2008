/*
 * func-name: ?AddNode@DynamicLasers@@QAEXAAVVector@@PAKPAM@Z_0
 * func-address: 0x1007b530
 * callers: 0x1000f82b
 * callees: none
 */

void __thiscall DynamicLasers::AddNode(DynamicLasers *this, struct Vector *a2, unsigned int *a3, float *a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+18h] [ebp+8h]

  v5 = *((_DWORD *)this + 45);
  *((_DWORD *)this + 45) = v5 + 1;
  v6 = *((_DWORD *)this + 65);
  if ( !v6 || v5 + 1 >= (unsigned int)((*((_DWORD *)this + 66) - v6) / 48) )
    *((_DWORD *)this + 45) = 0;
  v7 = *((_DWORD *)this + 65);
  if ( v5 < 0 )
  {
    if ( !v7 || !((*((_DWORD *)this + 66) - v7) / 48) )
      _invalid_parameter_noinfo();
    v8 = *((_DWORD *)this + 65);
  }
  else
  {
    if ( !v7 || v5 >= (unsigned int)((*((_DWORD *)this + 66) - v7) / 48) )
      _invalid_parameter_noinfo();
    v8 = *((_DWORD *)this + 65) + 48 * v5;
  }
  if ( *(float *)(v8 + 32) <= 0.0 )
  {
    v11 = *((float *)this + 59);
    *(float *)(v8 + 32) = v11;
    *(float *)(v8 + 36) = v11;
    if ( a3 )
      v9 = *a3;
    else
      v9 = *((_DWORD *)this + 57);
    *(_DWORD *)(v8 + 24) = v9;
    *(_DWORD *)(v8 + 28) = v9;
    if ( a4 )
      v10 = *a4;
    else
      v10 = *((float *)this + 58);
    v12 = v10;
    *(float *)(v8 + 40) = v12;
    *(_DWORD *)v8 = *(_DWORD *)a2;
    *(_DWORD *)(v8 + 4) = *((_DWORD *)a2 + 1);
    *(_DWORD *)(v8 + 8) = *((_DWORD *)a2 + 2);
  }
}
