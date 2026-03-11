/*
 * func-name: ?RenderShadowMaps@ShadowEngine@@QAEXPAVWorld@@PAVCamera@@@Z
 * func-address: 0x101286c0
 * callers: 0x10139890
 * callees: 0x100dd790, 0x101189f0, 0x101282d0
 */

void __thiscall ShadowEngine::RenderShadowMaps(ShadowEngine *this, struct World *a2, struct Camera *a3)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  unsigned int i; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx

  if ( *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    v3 = RenderDevice::Instance();
    if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 108))(v3) )
    {
      v4 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 360))(v4);
      v5 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 52))(v5);
      for ( i = 0; ; ++i )
      {
        v7 = *((_DWORD *)a2 + 810);
        if ( !v7 || i >= (*((_DWORD *)a2 + 811) - v7) >> 2 )
          break;
        v8 = *(_DWORD *)(*((_DWORD *)a2 + 810) + 4 * i);
        v9 = *(_DWORD *)(v8 + 1248);
        v10 = v8 + 1244;
        if ( v9 && (*(_DWORD *)(v10 + 8) - v9) >> 2 )
        {
          v11 = *((_DWORD *)a2 + 810);
          if ( !v11 || i >= (*((_DWORD *)a2 + 811) - v11) >> 2 )
            invalid_parameter_noinfo();
          if ( Light::IsVisible(*(Light **)(*((_DWORD *)a2 + 810) + 4 * i)) )
          {
            v12 = *((_DWORD *)a2 + 810);
            if ( !v12 || i >= (*((_DWORD *)a2 + 811) - v12) >> 2 )
              invalid_parameter_noinfo();
            ShadowEngine::RenderShadowMap(4 * i, (int)a3, i, *(struct Light **)(*((_DWORD *)a2 + 810) + 4 * i), a3);
          }
        }
      }
    }
  }
}
