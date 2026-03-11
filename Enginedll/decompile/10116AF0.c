/*
 * func-name: ?PreRender@PrefabInstance@@UAEXPAVCamera@@@Z
 * func-address: 0x10116af0
 * callers: none
 * callees: 0x1004e610, 0x10174d80, 0x101a2516
 */

void __thiscall PrefabInstance::PreRender(PrefabInstance *this, struct Camera *a2)
{
  float *v4; // edx
  float *v5; // edi
  double v6; // st7
  double v7; // st6
  bool v8; // zf
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+8h] [ebp-Ch]
  double v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+Ch] [ebp-8h]
  float v14; // [esp+10h] [ebp-4h]
  float v15; // [esp+10h] [ebp-4h]
  float v16; // [esp+18h] [ebp+4h]
  float v17; // [esp+18h] [ebp+4h]
  float v18; // [esp+18h] [ebp+4h]
  float v19; // [esp+18h] [ebp+4h]
  float v20; // [esp+18h] [ebp+4h]

  Prefab::PreRender(this, a2);
  if ( *(_BYTE *)(*((_DWORD *)this + 178) + 724) && *((_BYTE *)this + 1080) )
  {
    v9 = *((float *)a2 + 88) - *((float *)this + 214);
    v12 = *((float *)a2 + 89) - *((float *)this + 215);
    v14 = *((float *)a2 + 90) - *((float *)this + 216);
    v16 = v12 * v12 + v9 * v9 + v14 * v14;
    v17 = sqrt(v16);
    v4 = (float *)((char *)a2 + 400);
    v5 = (float *)((char *)this + 272);
    if ( *v4 <= (double)*((float *)this + 68) )
      v5 = v4;
    v10 = *((float *)this + 199) - *((float *)this + 196);
    v13 = *((float *)this + 200) - *((float *)this + 197);
    v15 = *((float *)this + 201) - *((float *)this + 198);
    v6 = v13;
    v7 = v10;
    v11 = v17;
    v18 = v6 * v6 + v7 * v7 + v15 * v15;
    v19 = sqrt(v18);
    v20 = v19 * 0.5 + *v5;
    if ( v20 > v11 )
    {
      v8 = *((_DWORD *)this + 269) == -1;
      *((float *)this + 267) = *((float *)this + 271);
      if ( v8 )
        *((_DWORD *)this + 269) = AsyncLoader::SubmitLoadModel(
                                    AsyncLoader::s_pInstance,
                                    (int)this + 1172,
                                    *((_DWORD *)this + 268));
    }
  }
}
