/*
 * func-name: sub_1015FB30
 * func-address: 0x1015fb30
 * callers: 0x10168a40
 * callees: 0x1009dd90, 0x100e2a60, 0x10136140, 0x101a24ac, 0x101a252e, 0x101a253a
 */

void __thiscall sub_1015FB30(int this, int a2)
{
  int v3; // eax
  struct Mesh *Mesh; // eax
  int Var; // eax
  int v6; // eax
  void *v7; // eax
  Texture *v8; // ecx
  struct IDirect3DTexture9 *Texture; // eax
  int i; // edi
  struct IDirect3DTexture9 *v11; // eax
  char v12; // [esp-10h] [ebp-30h] BYREF
  int v13; // [esp-Ch] [ebp-2Ch]
  int v14; // [esp-8h] [ebp-28h]
  int v15; // [esp-4h] [ebp-24h]
  int v16; // [esp+0h] [ebp-20h]
  int v17; // [esp+4h] [ebp-1Ch]
  int v18; // [esp+8h] [ebp-18h]
  _DWORD v19[2]; // [esp+18h] [ebp-8h] BYREF

  if ( a2 )
  {
    *(_DWORD *)(this + 4) = a2;
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 12) = 0;
    *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 1296) - 1;
    *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 1300) - 1;
    v3 = *(_DWORD *)(this + 36);
    if ( !v3 || !((*(_DWORD *)(this + 40) - v3) >> 2) )
      invalid_parameter_noinfo();
    Mesh = ModelFrame::GetMesh(*(ModelFrame **)(*(_DWORD *)(**(_DWORD **)(this + 36) + 716) + 308), 0);
    *(_DWORD *)(this + 24) = (*(int (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)Mesh + 108))(Mesh, 0);
    std::string::string(&v12, "tMixMap");
    Var = Material::FindVar(*(_DWORD **)(this + 24), v12, v13, v14, v15, v16, v17, v18);
    if ( Var )
    {
      v6 = *(_DWORD *)(Var + 60);
      if ( *(_DWORD *)(this + 28) != v6 )
      {
        *(_DWORD *)(this + 28) = v6;
        if ( *(_DWORD *)(this + 48) )
        {
          operator delete[](*(void **)(this + 48));
          *(_DWORD *)(this + 48) = 0;
        }
        v7 = operator new(4 * *(_DWORD *)(*(_DWORD *)(this + 28) + 80) * *(_DWORD *)(*(_DWORD *)(this + 28) + 84));
        v8 = *(Texture **)(this + 28);
        *(_DWORD *)(this + 48) = v7;
        Texture = Texture::GetTexture(v8);
        if ( Texture->lpVtbl->LockRect(Texture, 0, (D3DLOCKED_RECT *)v19, 0, 0) )
        {
          if ( *(_DWORD *)(this + 48) )
          {
            operator delete[](*(void **)(this + 48));
            *(_DWORD *)(this + 48) = 0;
          }
        }
        else
        {
          for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(this + 28) + 84); ++i )
            memcpy(
              (void *)(*(_DWORD *)(this + 48) + 4 * i * *(_DWORD *)(*(_DWORD *)(this + 28) + 80)),
              (const void *)(v19[1] + i * v19[0]),
              4 * *(_DWORD *)(*(_DWORD *)(this + 28) + 80));
          v11 = Texture::GetTexture(*(Texture **)(this + 28));
          v11->lpVtbl->UnlockRect(v11, 0);
        }
      }
    }
    else
    {
      *(_DWORD *)(this + 28) = 0;
    }
  }
}
