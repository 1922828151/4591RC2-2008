/*
 * func-name: sub_10101A60
 * func-address: 0x10101a60
 * callers: 0x10101ef0
 * callees: 0x10001440, 0x1000b5c0, 0x10061060, 0x10063830, 0x10076ef0, 0x100e8cd0, 0x100ee930, 0x10101610, 0x10101920, 0x101189f0, 0x101786e0, 0x1017a0b0, 0x101a251c
 */

int __thiscall sub_10101A60(_DWORD *this, Camera *a2, int a3, _DWORD *a4)
{
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // esi
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct VertexManager *v20; // edi
  _DWORD *v21; // ebp
  void (__stdcall **v22)(_DWORD *, _DWORD); // esi
  _DWORD *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  unsigned int i; // ebp
  int v27; // ecx
  int v28; // esi
  double v29; // st7
  int v30; // eax
  _DWORD *v31; // ecx
  float *WorldBBox; // eax
  struct RenderDevice *v33; // eax
  float v35[9]; // [esp+48h] [ebp-DCh] BYREF
  int v36; // [esp+6Ch] [ebp-B8h]
  struct Camera *v37; // [esp+70h] [ebp-B4h]
  int v38; // [esp+84h] [ebp-A0h] BYREF
  int v39; // [esp+88h] [ebp-9Ch]
  int v40; // [esp+8Ch] [ebp-98h]
  int v41; // [esp+90h] [ebp-94h]
  float v42; // [esp+94h] [ebp-90h]
  float v43; // [esp+98h] [ebp-8Ch]
  float v44; // [esp+9Ch] [ebp-88h]
  float v45; // [esp+A0h] [ebp-84h]
  float v46; // [esp+A4h] [ebp-80h]
  float v47; // [esp+A8h] [ebp-7Ch]
  float v48; // [esp+ACh] [ebp-78h]
  float v49[16]; // [esp+B0h] [ebp-74h] BYREF
  _DWORD v50[10]; // [esp+F0h] [ebp-34h] BYREF
  int v51; // [esp+120h] [ebp-4h]

  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 364))(v5);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 92))(v6);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v7 + 464))(v7, (char *)a2 + 220);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v8 + 476))(v8, (char *)a2 + 156);
  v9 = RenderDevice::Instance();
  memset(v49, 0, sizeof(v49));
  sub_101786E0(1.0);
  v49[15] = 1.0;
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v9 + 456))(v9, v49);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v10 + 432))(v10, 168, 0);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v11 + 432))(v11, 14, 0);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 22, 1);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 8, 3);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v14 + 432))(v14, 27, 0);
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 9, 1);
  v16 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v16 + 432))(v16, 137, 0);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 440))(v17, 0, 1, 1);
  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 4, 1);
  v19 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v19 + 496))(v19);
  v20 = VertexManager::Instance();
  v21 = (_DWORD *)*((_DWORD *)RenderDevice::Instance() + 427);
  v22 = (void (__stdcall **)(_DWORD *, _DWORD))(*v21 + 348);
  v23 = (_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v20 + 20))(v20, 12);
  (*v22)(v21, *v23);
  v24 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**((_DWORD **)v24 + 427) + 400))(
    *((_DWORD *)v24 + 427),
    0,
    this[53],
    0,
    24);
  v25 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v25 + 427) + 416))(*((_DWORD *)v25 + 427), this[54]);
  for ( i = 0; i < std::vector<Model *>::size(a4); ++i )
  {
    v27 = a4[1];
    if ( !v27 || i >= (a4[2] - v27) >> 2 )
      invalid_parameter_noinfo();
    v28 = *(_DWORD *)(a4[1] + 4 * i);
    if ( *(_BYTE *)(v28 + 1012) )
    {
      v48 = GDeltaTime + *(float *)(v28 + 368);
      v29 = v48;
      *(float *)(v28 + 368) = v48;
      if ( *(float *)(v28 + 372) <= v29 )
      {
        v30 = *(_DWORD *)(v28 + 380);
        if ( !v30 || !*(_BYTE *)(v30 + 364) )
        {
          sub_10001440((float *)&v38);
          v31 = *(_DWORD **)(v28 + 716);
          v51 = 0;
          if ( v31 )
          {
            WorldBBox = (float *)StaticModel::GetWorldBBox(v31, v50);
            v39 = *((_DWORD *)WorldBBox + 1);
            v40 = *((_DWORD *)WorldBBox + 2);
            v41 = *((_DWORD *)WorldBBox + 3);
            v42 = WorldBBox[4];
            v43 = WorldBBox[5];
            v44 = WorldBBox[6];
            v45 = WorldBBox[7];
            v46 = WorldBBox[8];
            v47 = WorldBBox[9];
            sub_1017A0B0(v50);
          }
          else
          {
            v39 = *(_DWORD *)(v28 + 772);
            v40 = *(_DWORD *)(v28 + 776);
            v41 = *(_DWORD *)(v28 + 780);
            v42 = *(float *)(v28 + 784);
            v43 = *(float *)(v28 + 788);
            v44 = *(float *)(v28 + 792);
            v45 = *(float *)(v28 + 796);
            v46 = *(float *)(v28 + 800);
            v47 = *(float *)(v28 + 804);
            v42 = *(float *)(v28 + 856) + v42;
            v43 = *(float *)(v28 + 860) + v43;
            v44 = *(float *)(v28 + 864) + v44;
            v45 = *(float *)(v28 + 856) + v45;
            v46 = *(float *)(v28 + 860) + v46;
            v47 = *(float *)(v28 + 864) + v47;
          }
          if ( Camera::BoxInFrustum(a2, (const struct BBox *)&v38, 0.0, 0) )
          {
            if ( sub_10061060((float *)&v38, (float *)a2 + 88) )
            {
              v37 = 0;
              *(float *)(v28 + 368) = 0.0;
              v36 = v28;
              *(float *)(v28 + 372) = *(float *)(v28 + 376);
              sub_10101610(v36, (char)v37);
            }
            else
            {
              v37 = a2;
              v48 = COERCE_FLOAT(v35);
              sub_1000B5C0(v35, &v38);
              sub_10101920(
                this,
                v28,
                v35[0],
                SLODWORD(v35[1]),
                SLODWORD(v35[2]),
                SLODWORD(v35[3]),
                v35[4],
                v35[5],
                v35[6],
                v35[7],
                v35[8],
                *(float *)&v36,
                v37);
            }
          }
          else
          {
            *(float *)(v28 + 368) = 0.0;
            *(float *)(v28 + 372) = *(float *)(v28 + 376);
          }
          v51 = -1;
          sub_1017A0B0(&v38);
        }
      }
    }
  }
  v33 = RenderDevice::Instance();
  return (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v33 + 360))(v33);
}
