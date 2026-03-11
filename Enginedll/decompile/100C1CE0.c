/*
 * func-name: ?Render@C3DModel@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c1ce0
 * callers: none
 * callees: 0x100a5e50, 0x100b5280, 0x100b5e40, 0x100d6d20, 0x101189f0, 0x10178152, 0x101a26c0
 */

void __thiscall C3DModel::Render(C3DModel *this, struct IDirect3DDevice9 *a2, float a3)
{
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  struct CREDialogResourceManager *v7; // eax
  int v8; // edi
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // edi
  LONG v13; // edx
  LONG v14; // ecx
  LONG v15; // eax
  LONG v16; // edx
  int v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  double v20; // st7
  LONG v21; // ebx
  double v22; // st6
  int v23; // edx
  struct CREDialogResourceManager *v24; // eax
  int v25; // esi
  double v26; // st7
  struct RenderDevice *v27; // eax
  int v28; // edi
  struct RenderDevice *v29; // eax
  int v30; // ebx
  struct RenderDevice *v31; // eax
  int v32; // esi
  struct CREDialogResourceManager *v33; // eax
  struct RenderDevice *v34; // eax
  struct RenderDevice *v35; // eax
  struct RenderDevice *v36; // eax
  float v37; // [esp+1Ch] [ebp-74h]
  float v38; // [esp+2Ch] [ebp-64h]
  float v39; // [esp+2Ch] [ebp-64h]
  float v40; // [esp+30h] [ebp-60h]
  int v41; // [esp+30h] [ebp-60h]
  float v42; // [esp+30h] [ebp-60h]
  int v43; // [esp+30h] [ebp-60h]
  float left; // [esp+34h] [ebp-5Ch] BYREF
  float top; // [esp+38h] [ebp-58h]
  float v46; // [esp+3Ch] [ebp-54h]
  struct tagRECT rc; // [esp+40h] [ebp-50h] BYREF
  _BYTE v48[64]; // [esp+50h] [ebp-40h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(C3DModel *))(*(_DWORD *)this + 140))(this) )
  {
    v4 = (int *)*((_DWORD *)this + 271);
    if ( v4 )
    {
      if ( !v4[5] || !v4[6] )
      {
        v5 = *v4;
        v6 = *((_DWORD *)this + 28);
        v7 = REGetGlobalDialogResourceManager();
        if ( v7 )
        {
          v8 = *(_DWORD *)(*(_DWORD *)(v6 + 740) + 4 * v5);
          v7 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v8);
        }
        *(_DWORD *)(*((_DWORD *)this + 271) + 20) = *((_DWORD *)v7 + 131);
        v9 = **((_DWORD **)this + 271);
        v10 = *((_DWORD *)this + 28);
        if ( REGetGlobalDialogResourceManager() )
        {
          v12 = *(_DWORD *)(*(_DWORD *)(v10 + 740) + 4 * v9);
          v11 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v12);
        }
        else
        {
          v11 = 0;
        }
        *(_DWORD *)(*((_DWORD *)this + 271) + 24) = *(_DWORD *)(v11 + 528);
      }
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 271) + 36), 0, a3, 0.0);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 271),
        (struct tagRECT *)((char *)this + 164),
        1.0);
    }
    v13 = *((_DWORD *)this + 253);
    v14 = *((_DWORD *)this + 255);
    *((_DWORD *)this + 259) = 512;
    *((_DWORD *)this + 260) = 512;
    v15 = *((_DWORD *)this + 254);
    rc.left = v13;
    v16 = *((_DWORD *)this + 256);
    rc.top = v15;
    v17 = *((_DWORD *)this + 28);
    rc.right = v14;
    rc.bottom = v16;
    OffsetRect(&rc, *((_DWORD *)this + 41) + *(_DWORD *)(v17 + 692), *((_DWORD *)this + 42) + *(_DWORD *)(v17 + 696));
    if ( *((_BYTE *)GUISystem::Instance() + 45) )
    {
      v18 = RenderDevice::Instance();
      v38 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v18 + 296))(v18) * 0.0009765625;
      v19 = RenderDevice::Instance();
      v40 = (double)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v19 + 300))(v19) / 768.0;
      v20 = 1.0;
    }
    else
    {
      v20 = 1.0;
      v40 = 1.0;
      v38 = 1.0;
    }
    v21 = (int)((double)rc.left * v38);
    rc.left = v21;
    rc.right = (int)(v38 * (double)rc.right);
    v22 = v40 * (double)rc.bottom;
    rc.top = (int)((double)rc.top * v40);
    v41 = *((_DWORD *)this + 259) - *((_DWORD *)this + 257);
    v23 = *((_DWORD *)this + 260) - *((_DWORD *)this + 258);
    rc.bottom = (int)v22;
    v42 = (double)(rc.right - v21) / (double)v41;
    v39 = (double)((int)v22 - rc.top) / (double)v23;
    v37 = v20;
    D3DXMatrixScaling(v48, LODWORD(v42), LODWORD(v39), LODWORD(v37));
    v24 = REGetGlobalDialogResourceManager();
    (*(void (__stdcall **)(_DWORD, _BYTE *))(**((_DWORD **)v24 + 1) + 20))(*((_DWORD *)v24 + 1), v48);
    v25 = *((_DWORD *)this + 133);
    left = (float)rc.left;
    top = (float)rc.top;
    v46 = 0.0;
    v26 = left / v42;
    v43 = v25;
    left = v26;
    top = top / v39;
    if ( v25 )
    {
      v27 = RenderDevice::Instance();
      v28 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v27 + 432))(v27, 27, 0);
      v29 = RenderDevice::Instance();
      v30 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v29 + 432))(v29, 19, 7);
      v31 = RenderDevice::Instance();
      v32 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v31 + 432))(v31, 20, 7);
      v33 = REGetGlobalDialogResourceManager();
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, float *, int))(**((_DWORD **)v33 + 1) + 36))(
        *((_DWORD *)v33 + 1),
        *(_DWORD *)(v43 + 1080),
        0,
        0,
        &left,
        -1);
      v34 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v34 + 432))(v34, 27, v28);
      v35 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v35 + 432))(v35, 19, v30);
      v36 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v36 + 432))(v36, 20, v32);
    }
  }
}
