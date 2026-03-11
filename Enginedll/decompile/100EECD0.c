/*
 * func-name: ?FindStrongestLight@StaticModel@@QAEPAVLight@@XZ
 * func-address: 0x100eecd0
 * callers: none
 * callees: none
 */

struct Light *__thiscall StaticModel::FindStrongestLight(StaticModel *this)
{
  int v1; // ebx
  unsigned int v3; // edi
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  double v7; // st6
  double v8; // st6
  float v10; // [esp+8h] [ebp-18h]
  float v11; // [esp+8h] [ebp-18h]
  float v12; // [esp+8h] [ebp-18h]
  float v13; // [esp+Ch] [ebp-14h]
  float v14; // [esp+Ch] [ebp-14h]
  float v15; // [esp+10h] [ebp-10h]
  float v16; // [esp+14h] [ebp-Ch]
  float v17; // [esp+18h] [ebp-8h]
  float v18; // [esp+1Ch] [ebp-4h]

  v15 = 999.0;
  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)this + 73);
    if ( !v4 || v3 >= (*((_DWORD *)this + 74) - v4) >> 2 )
      return (struct Light *)v1;
    v5 = *(_DWORD *)(*((_DWORD *)this + 73) + 4 * v3);
    if ( *(_DWORD *)(v5 + 1428) == 4 )
      return *(struct Light **)(*((_DWORD *)this + 73) + 4 * v3);
    if ( *(_BYTE *)(v5 + 1420) || *(_BYTE *)(v5 + 816) || -1.0 != *(float *)(v5 + 820) )
      goto LABEL_16;
    v6 = 2;
    v13 = *(float *)(v5 + 1136);
    v10 = 1.0;
    while ( 1 )
    {
      v7 = v13;
      if ( (v6 & 1) != 0 )
        v10 = v10 * v7;
      v6 >>= 1;
      if ( !v6 )
        break;
      v13 = v7 * v7;
    }
    v16 = *(float *)(v5 + 856) - *((float *)this + 68);
    v17 = *(float *)(v5 + 860) - *((float *)this + 69);
    v18 = *(float *)(v5 + 864) - *((float *)this + 70);
    v14 = v18 * v18 + v17 * v17 + v16 * v16;
    v11 = v14 / v10;
    if ( v11 >= 1.0 || (v8 = v11, v12 = v11 / *(float *)(v5 + 1092), v15 <= (double)v12) )
    {
LABEL_16:
      ++v3;
    }
    else
    {
      v15 = v8 / *(float *)(v5 + 1092);
      v1 = *(_DWORD *)(*((_DWORD *)this + 73) + 4 * v3++);
    }
  }
}
