/*
 * func-name: ?GetFrameNearestToPoint@StaticModel@@QAEPAUModelFrame@@AAVVector@@@Z
 * func-address: 0x100ef0a0
 * callers: none
 * callees: 0x10076ef0, 0x1009eed0, 0x101a2500, 0x101a2516
 */

struct ModelFrame *__thiscall StaticModel::GetFrameNearestToPoint(StaticModel *this, struct Vector *a2)
{
  _DWORD *v2; // ecx
  unsigned int v3; // edi
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // esi
  float *v9; // eax
  double v10; // st7
  float v11; // [esp+4h] [ebp-2Ch]
  float v12; // [esp+8h] [ebp-28h]
  float v13; // [esp+Ch] [ebp-24h]
  float v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch] BYREF
  void *v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+2Ch] [ebp-4h]
  float v20; // [esp+34h] [ebp+4h]
  float v21; // [esp+34h] [ebp+4h]

  v2 = (_DWORD *)*((_DWORD *)this + 77);
  v3 = 0;
  if ( !v2 )
    return 0;
  v11 = 1.0e10;
  v5 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  ModelFrame::EnumerateFrames(v2, (int)&v15);
  v6 = std::vector<Model *>::size(&v15);
  v7 = v16;
  if ( v6 )
  {
    do
    {
      if ( !v7 || v3 >= (v17 - (int)v7) >> 2 )
      {
        invalid_parameter_noinfo();
        v7 = v16;
      }
      v9 = (float *)v7[v3];
      v10 = v9[53];
      v9 += 53;
      v12 = v10 - *(float *)a2;
      v13 = v9[1] - *((float *)a2 + 1);
      v14 = v9[2] - *((float *)a2 + 2);
      v20 = v13 * v13 + v12 * v12 + v14 * v14;
      v21 = sqrt(v20);
      if ( v11 > (double)v21 )
      {
        v11 = v21;
        if ( !v7 || v3 >= (v17 - (int)v7) >> 2 )
        {
          invalid_parameter_noinfo();
          v7 = v16;
        }
        v5 = v7[v3];
      }
      ++v3;
    }
    while ( v3 < std::vector<Model *>::size(&v15) );
  }
  if ( v7 )
    operator delete(v7);
  return (struct ModelFrame *)v5;
}
