/*
 * func-name: ?MergeModels@Editor@@QAEXAAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
 * func-address: 0x10084dd0
 * callers: none
 * callees: 0x10084160, 0x100993b0, 0x101a2516
 */

unsigned int __thiscall Editor::MergeModels(struct World **this, int a2)
{
  unsigned int v4; // ebx
  unsigned int result; // eax
  int v6; // eax
  float *v7; // eax
  double v8; // st7
  float v9; // [esp+8h] [ebp-2Ch]
  int v10; // [esp+Ch] [ebp-28h]
  float v11; // [esp+10h] [ebp-24h]
  float v12; // [esp+14h] [ebp-20h]
  float v13; // [esp+18h] [ebp-1Ch]
  float v14; // [esp+1Ch] [ebp-18h]
  float v15; // [esp+20h] [ebp-14h]
  float v16; // [esp+24h] [ebp-10h]
  float v17; // [esp+28h] [ebp-Ch]
  float v18; // [esp+2Ch] [ebp-8h]
  float v19; // [esp+30h] [ebp-4h]
  float v20; // [esp+38h] [ebp+4h]
  int v21; // [esp+38h] [ebp+4h]
  float v22; // [esp+38h] [ebp+4h]

  v9 = 0.0;
  v4 = 0;
  result = sub_100993B0(a2);
  if ( result )
  {
    v10 = 0;
    do
    {
      v6 = *(_DWORD *)(a2 + 4);
      if ( !v6 || v4 >= (*(_DWORD *)(a2 + 8) - v6) / 28 )
        invalid_parameter_noinfo();
      v7 = (float *)Editor::AddPrefab(this, v10 + *(_DWORD *)(a2 + 4));
      if ( v7 )
      {
        v11 = v7[199] - v7[196];
        v12 = v7[200] - v7[197];
        v13 = v7[201] - v7[198];
        v20 = v12 * v12 + v11 * v11 + v13 * v13;
        *(float *)&v21 = sqrt(v20);
        if ( 0.0 == *(float *)&v21 )
          *(float *)&v21 = 1.0;
        v9 = *(float *)&v21 + v9;
        v22 = v9 * 4.0;
        v14 = *((float *)this + 157) * v22;
        v15 = *((float *)this + 158) * v22;
        v16 = v22 * *((float *)this + 159);
        v17 = *((float *)this + 151) + v14;
        v18 = *((float *)this + 152) + v15;
        v8 = *((float *)this + 153);
        v7[214] = v17;
        v7[215] = v18;
        v19 = v8 + v16;
        v7[216] = v19;
      }
      v10 += 28;
      ++v4;
      result = sub_100993B0(a2);
    }
    while ( v4 < result );
  }
  return result;
}
