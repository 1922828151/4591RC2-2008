/*
 * func-name: ?DrawLight@Editor@@IAEXPAVLight@@@Z
 * func-address: 0x100820f0
 * callers: 0x10088cd0
 * callees: 0x1000bc40, 0x101189f0, 0x101a251c
 */

void __thiscall Editor::DrawLight(Editor *this, struct Light *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  int v10; // ebx
  int v11; // eax
  _DWORD v12[17]; // [esp+3Ch] [ebp-CCh] BYREF
  float v13[18]; // [esp+80h] [ebp-88h] BYREF
  float v14[16]; // [esp+C8h] [ebp-40h] BYREF

  if ( !*((_BYTE *)a2 + 816) && *((_BYTE *)this + 2075) )
  {
    qmemcpy(v13, (char *)a2 + 1076, sizeof(v13));
    v3 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 496))(v3);
    v4 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v4 + 432))(v4, 27, 0);
    v5 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v5 + 440))(v5, 0, 1, 2);
    v6 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 440))(v6, 0, 2, 0);
    v7 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v7 + 440))(v7, 0, 4, 1);
    memset(v12, 0, sizeof(v12));
    *(float *)&v12[12] = v13[0];
    *(float *)&v12[13] = v13[1];
    *(float *)&v12[14] = v13[2];
    *(float *)&v12[15] = 1.0;
    *(float *)v12 = v13[0];
    *(float *)&v12[1] = v13[1];
    *(float *)&v12[2] = v13[2];
    *(float *)&v12[3] = 1.0;
    v8 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD *))(*(_DWORD *)v8 + 488))(v8, v12);
    sub_1000BC40(v14);
    qmemcpy(v14, (char *)a2 + 868, sizeof(v14));
    v14[12] = v13[9];
    v14[13] = v13[10];
    v14[14] = v13[11];
    v9 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v9 + 456))(v9, v14);
    v10 = *((_DWORD *)a2 + 357);
    if ( v10 == 2 || v10 == 8 )
    {
      v11 = *((_DWORD *)this + 16);
    }
    else
    {
      if ( v10 != 1 )
        return;
      v11 = *((_DWORD *)this + 17);
    }
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v11 + 12))(v11, 0);
  }
}
