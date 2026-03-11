/*
 * func-name: ?DrawBatches@BatchRenderer@@QAEXAAV?$vector@PAUBatchItem@@V?$allocator@PAUBatchItem@@@std@@@std@@@Z
 * func-address: 0x100566a0
 * callers: 0x100efe90, 0x100f04f0
 * callees: 0x1000d9a0, 0x10055d20, 0x10055de0, 0x10058710, 0x10058770, 0x1005b1f0, 0x10076ef0, 0x100a1d10, 0x101189f0, 0x101a2500
 */

void __thiscall BatchRenderer::DrawBatches(BatchRenderer *this, int a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  _DWORD *v9; // eax
  unsigned int v10; // esi
  _BYTE *v11; // eax
  _BYTE *v12; // edi
  _DWORD *v13; // eax
  unsigned int v14; // esi
  unsigned int i; // edi
  int v16; // ecx
  char v17; // [esp+31h] [ebp-C5h]
  int v18; // [esp+32h] [ebp-C4h] BYREF
  void *Destination; // [esp+36h] [ebp-C0h]
  _BYTE *v20; // [esp+3Ah] [ebp-BCh]
  int v21; // [esp+3Eh] [ebp-B8h]
  void *Source; // [esp+42h] [ebp-B4h] BYREF
  _DWORD v23[15]; // [esp+4Ah] [ebp-ACh] BYREF
  char v24[16]; // [esp+86h] [ebp-70h] BYREF
  unsigned int v25; // [esp+96h] [ebp-60h]
  _DWORD v26[15]; // [esp+9Ah] [ebp-5Ch] BYREF
  char v27[16]; // [esp+D6h] [ebp-20h] BYREF
  unsigned int v28; // [esp+E6h] [ebp-10h]
  int v29; // [esp+F2h] [ebp-4h]

  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v3 + 432))(v3, 24, 255);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v4 + 432))(v4, 14, 1);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v5 + 432))(v5, 25, 7);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 19, 5);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 20, 6);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 23, 2);
  v17 = *((_BYTE *)this + 1044);
  *((_BYTE *)this + 1044) = 0;
  Destination = 0;
  v20 = 0;
  v21 = 0;
  v29 = 0;
  sub_1005B1F0((int)&v18, (int)&unk_101C09C4);
  sub_10058710(v26);
  v9 = Destination;
  LOBYTE(v29) = 1;
  v10 = v28;
  if ( !Destination || v28 >= (v20 - (_BYTE *)Destination) >> 2 )
  {
    invalid_parameter_noinfo();
    v9 = Destination;
  }
  v26[1] = v9[v10];
  sub_1000D9A0((int)v27, (int)&v18);
  v11 = v20;
  v12 = Destination;
  Source = v20;
  if ( Destination > v20 )
  {
    invalid_parameter_noinfo();
    v11 = v20;
    v12 = Destination;
  }
  if ( v12 > v11 )
    invalid_parameter_noinfo();
  std::vector<Model *>::erase((int)&Source, (int)&v18, v12, (int)&v18, Source);
  sub_1005B1F0((int)&v18, (int)&unk_101C09D8);
  sub_10058710(v23);
  v13 = Destination;
  LOBYTE(v29) = 2;
  LOBYTE(v23[0]) = 1;
  v14 = v25;
  if ( !Destination || v25 >= (v20 - (_BYTE *)Destination) >> 2 )
  {
    invalid_parameter_noinfo();
    v13 = Destination;
  }
  v23[1] = v13[v14];
  sub_1000D9A0((int)v24, (int)&v18);
  for ( i = 0; i < std::vector<Model *>::size(a2); ++i )
  {
    v16 = *(_DWORD *)(a2 + 4);
    if ( !v16 || i >= (*(_DWORD *)(a2 + 8) - v16) >> 2 )
      invalid_parameter_noinfo();
    BatchRenderer::QueueBatchItem(
      this,
      *(struct BatchItem **)(*(_DWORD *)(a2 + 4) + 4 * i),
      (struct SortTree *)v26,
      (struct SortTree *)v23);
  }
  sub_10055D20(v26);
  sub_10055D20(v23);
  *((_BYTE *)this + 1044) = v17;
  LOBYTE(v29) = 1;
  sub_10058770(v23);
  LOBYTE(v29) = 0;
  sub_10058770(v26);
  if ( Destination )
    operator delete(Destination);
}
