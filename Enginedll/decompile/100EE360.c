/*
 * func-name: ?ChooseLOD@StaticModel@@QAEPAVMesh@@PAVCamera@@PAUModelFrame@@@Z
 * func-address: 0x100ee360
 * callers: 0x100805c0, 0x100ee9d0, 0x100efe90, 0x100f04f0, 0x100f0c50, 0x100f1180
 * callees: 0x1009dbf0, 0x1009dd90, 0x100e1d90, 0x1017a160, 0x101a2516, 0x101a26c0
 */

struct Mesh *__thiscall StaticModel::ChooseLOD(StaticModel *this, struct Camera *a2, struct ModelFrame *a3)
{
  ModelFrame *v5; // ecx
  float *v8; // esi
  float *Mesh; // eax
  double v10; // st7
  ModelFrame *v11; // ebx
  ModelFrame *v12; // ecx
  signed int v13; // eax
  int v14; // esi
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+1Ch] [ebp-Ch]
  float v17; // [esp+20h] [ebp-8h]
  float v18; // [esp+20h] [ebp-8h]
  float v19; // [esp+24h] [ebp-4h]
  float v20; // [esp+24h] [ebp-4h]
  float v21; // [esp+2Ch] [ebp+4h]
  float v22; // [esp+2Ch] [ebp+4h]
  float v23; // [esp+30h] [ebp+8h]
  float v24; // [esp+30h] [ebp+8h]
  float v25; // [esp+30h] [ebp+8h]
  float v26; // [esp+30h] [ebp+8h]
  float v27; // [esp+30h] [ebp+8h]
  float v28; // [esp+30h] [ebp+8h]
  float v29; // [esp+30h] [ebp+8h]

  if ( *((float *)a2 + 100) >= 100.0 )
  {
    v21 = 0.0;
    if ( ModelFrame::GetMesh(a3, 0) )
    {
      v8 = (float *)((char *)ModelFrame::GetMesh(a3, 0) + 2436);
      Mesh = (float *)ModelFrame::GetMesh(a3, 0);
      v10 = Mesh[612] - *v8;
      Mesh += 612;
      v15 = v10;
      v17 = Mesh[1] - v8[1];
      v19 = Mesh[2] - v8[2];
      v23 = v17 * v17 + v15 * v15 + v19 * v19;
      v24 = sqrt(v23);
      v21 = v24 * 0.5;
    }
    v16 = *((float *)a2 + 88) - *((float *)a3 + 53);
    v18 = *((float *)a2 + 89) - *((float *)a3 + 54);
    v20 = *((float *)a2 + 90) - *((float *)a3 + 55);
    v25 = v18 * v18 + v16 * v16 + v20 * v20;
    v26 = sqrt(v25);
    v27 = v26 - v21;
    if ( v27 < 0.0 )
      v27 = 0.0;
    if ( *((float *)this + 54) * *(float *)LODManager::Instance() >= v27 )
    {
      if ( *((float *)this + 53) > 0.0 )
      {
        v12 = (ModelFrame *)*((_DWORD *)this + 77);
        if ( *((_BYTE *)v12 + 16) )
          ModelFrame::SetDisableLODs(v12, 0);
        v13 = *((_DWORD *)this + 25);
        if ( v13 == -1 || v13 >= *((_DWORD *)a3 + 10) )
        {
          v22 = *((float *)LODManager::Instance() + 1) * *((float *)this + 53);
          v28 = *((float *)a2 + 98) / 100.0 * v27;
          sub_1017A160(v28, 0.0, v22);
          v14 = *((_DWORD *)a3 + 10);
          v29 = v28 / v22;
          v13 = (int)((double)v14 * v29);
          if ( v13 >= 0 )
          {
            if ( v13 >= v14 )
              v13 = v14 - 1;
          }
          else
          {
            v13 = 0;
          }
          *((_DWORD *)a3 + 93) = v13;
        }
        return ModelFrame::GetMesh(a3, v13);
      }
      else
      {
        v11 = (ModelFrame *)*((_DWORD *)this + 77);
        if ( !*((_BYTE *)v11 + 16) )
          ModelFrame::SetDisableLODs(v11, 1);
        return ModelFrame::GetMesh(a3, 0);
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v5 = (ModelFrame *)*((_DWORD *)this + 77);
    if ( !*((_BYTE *)v5 + 16) )
      ModelFrame::SetDisableLODs(v5, 1);
    return ModelFrame::GetMesh(a3, 0);
  }
}
