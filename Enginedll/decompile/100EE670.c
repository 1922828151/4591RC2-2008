/*
 * func-name: ?DrawHierarchy@StaticModel@@IAEXPAUModelFrame@@0@Z
 * func-address: 0x100ee670
 * callers: 0x100ee670, 0x100eeb40
 * callees: 0x10001370, 0x10009730, 0x10064610, 0x100ee670, 0x101189f0, 0x1017a0b0
 */

void __thiscall StaticModel::DrawHierarchy(StaticModel *this, struct ModelFrame **a2, struct ModelFrame *a3)
{
  struct RenderDevice *v5; // eax
  float v6; // eax
  float v7; // ecx
  float v8; // edi
  struct ModelFrame *v9; // edx
  struct ModelFrame *v10; // ecx
  struct ModelFrame *v11; // eax
  struct Canvas *v12; // eax
  struct Canvas *v13; // eax
  float v14; // [esp+18h] [ebp-74h]
  float v15; // [esp+18h] [ebp-74h]
  float v16[3]; // [esp+1Ch] [ebp-70h] BYREF
  float v17; // [esp+28h] [ebp-64h] BYREF
  float v18; // [esp+2Ch] [ebp-60h]
  float v19; // [esp+30h] [ebp-5Ch]
  int v20; // [esp+34h] [ebp-58h]
  int v21; // [esp+38h] [ebp-54h]
  int v22; // [esp+3Ch] [ebp-50h]
  struct ModelFrame *v23; // [esp+40h] [ebp-4Ch]
  struct ModelFrame *v24; // [esp+44h] [ebp-48h]
  struct ModelFrame *v25; // [esp+48h] [ebp-44h]
  int v26; // [esp+4Ch] [ebp-40h]
  int v27; // [esp+50h] [ebp-3Ch]
  int v28; // [esp+54h] [ebp-38h]
  float v29[10]; // [esp+58h] [ebp-34h] BYREF
  int v30; // [esp+88h] [ebp-4h]
  float v31; // [esp+90h] [ebp+4h]
  float v32; // [esp+90h] [ebp+4h]
  float v33; // [esp+94h] [ebp+8h]
  float v34; // [esp+94h] [ebp+8h]

  if ( a2 )
  {
    dword_11240D9C += 5;
    StaticModel::DrawHierarchy(this, a2[90], (struct ModelFrame *)a2);
    StaticModel::DrawHierarchy(this, a2[89], (struct ModelFrame *)a2);
    v5 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, unsigned int))(*(_DWORD *)v5 + 432))(
      v5,
      60,
      dword_11240D9C | ((dword_11240D9C | ((dword_11240D9C | 0xFFFFFF00) << 8)) << 8));
    if ( a3 )
    {
      sub_10009730((int)&v17, 24, 2, (int (__thiscall *)(int))sub_100012D0);
      v6 = *((float *)a3 + 53);
      v7 = *((float *)a3 + 54);
      v8 = *((float *)a3 + 55);
      v20 = -1;
      v9 = a2[55];
      v17 = v6;
      v18 = v7;
      v10 = a2[54];
      v11 = a2[53];
      v19 = v8;
      v24 = v10;
      v25 = v9;
      v23 = v11;
      v26 = -1;
      v27 = v21;
      v28 = v22;
      v12 = Canvas::Instance();
      (*(void (__thiscall **)(struct Canvas *, int, float *, int, _DWORD))(*(_DWORD *)v12 + 84))(v12, 2, &v17, 24, 0);
    }
    v31 = *((float *)a2 + 53) + 0.01999999955296516;
    v33 = *((float *)a2 + 54) + 0.01999999955296516;
    v14 = *((float *)a2 + 55) + 0.01999999955296516;
    v16[0] = v31;
    v16[1] = v33;
    v16[2] = v14;
    v32 = *((float *)a2 + 53) - 0.01999999955296516;
    v34 = *((float *)a2 + 54) - 0.01999999955296516;
    v15 = *((float *)a2 + 55) - 0.01999999955296516;
    v17 = v32;
    v18 = v34;
    v19 = v15;
    sub_10001370(v29, &v17, v16);
    v30 = 0;
    v13 = Canvas::Instance();
    (*(void (__thiscall **)(struct Canvas *, float *))(*(_DWORD *)v13 + 132))(v13, v29);
    v30 = -1;
    sub_1017A0B0(v29);
  }
}
