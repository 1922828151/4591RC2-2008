/*
 * func-name: ?PreRender@Prefab@@UAEXPAVCamera@@@Z
 * func-address: 0x1004e610
 * callers: 0x10116af0, 0x1015d420, 0x1015e9b0
 * callees: 0x100ee930, 0x10172570, 0x1017a0b0, 0x101a2516
 */

void __thiscall Prefab::PreRender(Prefab *this, struct Camera *a2)
{
  int v3; // ecx
  float *WorldBBox; // ebx
  int v5; // ecx
  float *v7; // ebp
  float *v8; // edx
  float *v9; // edi
  int v10; // eax
  float v11; // [esp+4h] [ebp-68h]
  float v12; // [esp+4h] [ebp-68h]
  float v13; // [esp+8h] [ebp-64h]
  float v14; // [esp+8h] [ebp-64h]
  float v15; // [esp+Ch] [ebp-60h]
  _BYTE v16[40]; // [esp+10h] [ebp-5Ch] BYREF
  _BYTE v17[40]; // [esp+38h] [ebp-34h] BYREF
  int v18; // [esp+68h] [ebp-4h]
  float v19; // [esp+70h] [ebp+4h]
  float v20; // [esp+70h] [ebp+4h]
  float v21; // [esp+70h] [ebp+4h]
  float v22; // [esp+70h] [ebp+4h]
  float v23; // [esp+70h] [ebp+4h]
  float v24; // [esp+70h] [ebp+4h]
  float v25; // [esp+70h] [ebp+4h]

  if ( *(_BYTE *)(*((_DWORD *)this + 178) + 724) )
  {
    if ( !*((_BYTE *)this + 1080) )
    {
      v3 = *((_DWORD *)this + 179);
      if ( v3 )
      {
        WorldBBox = (float *)StaticModel::GetWorldBBox(v3, v17);
        v5 = *((_DWORD *)this + 179);
        v18 = 0;
        v7 = (float *)StaticModel::GetWorldBBox(v5, v16);
        v11 = *((float *)a2 + 88) - *((float *)this + 214);
        v19 = *((float *)a2 + 89) - *((float *)this + 215);
        v13 = *((float *)a2 + 90) - *((float *)this + 216);
        v20 = v19 * v19 + v11 * v11 + v13 * v13;
        v21 = sqrt(v20);
        v15 = v21;
        v8 = (float *)((char *)a2 + 400);
        v9 = (float *)((char *)this + 272);
        if ( *v8 <= (double)*((float *)this + 68) )
          v9 = v8;
        v14 = v7[7] - WorldBBox[4];
        v22 = v7[8] - WorldBBox[5];
        v12 = v7[9] - WorldBBox[6];
        v23 = v22 * v22 + v14 * v14 + v12 * v12;
        v24 = sqrt(v23);
        v25 = v24 * 0.5 + *v9;
        sub_1017A0B0(v16);
        v18 = -1;
        sub_1017A0B0(v17);
        if ( v25 > (double)v15 )
        {
          v10 = *((_DWORD *)this + 179);
          *((float *)this + 267) = *((float *)this + 271);
          if ( v10 )
          {
            if ( *((_DWORD *)this + 269) == -1 )
              *((_DWORD *)this + 269) = AsyncLoader::SubmitLoadWorldNode(
                                          AsyncLoader::s_pInstance,
                                          v10 + 320,
                                          *((_DWORD *)this + 268));
          }
        }
      }
    }
  }
}
