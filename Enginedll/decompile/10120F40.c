/*
 * func-name: ?SetVar@Shader@@QAEXAAUShaderVar@@@Z
 * func-address: 0x10120f40
 * callers: 0x100e2b60, 0x100e35c0, 0x100e6600, 0x101210f0, 0x10121330, 0x10121350, 0x10121380, 0x101213d0, 0x101215e0, 0x101216e0, 0x101217d0, 0x101218a0, 0x101218c0, 0x10121930, 0x10121a70, 0x10121b80, 0x10121c90, 0x10121e80, 0x10122050, 0x101220b0, 0x10124d90
 * callees: 0x101207d0, 0x10136140
 */

void __thiscall Shader::SetVar(Shader *this, struct ShaderVar *a2)
{
  int v3; // eax
  float *v4; // esi
  Texture *v5; // ecx
  int v6; // ebx
  struct IDirect3DTexture9 *Texture; // eax
  int v8; // [esp-8h] [ebp-28h]
  float v9; // [esp+Ch] [ebp-14h]
  float v10[4]; // [esp+10h] [ebp-10h] BYREF
  float v11; // [esp+24h] [ebp+4h]

  if ( *((_DWORD *)a2 + 15) )
  {
    if ( *((_DWORD *)this + 4) )
    {
      v3 = *((_DWORD *)a2 + 17);
      if ( v3 || (Shader::CreateHandle(this, a2), (v3 = *((_DWORD *)a2 + 17)) != 0) )
      {
        if ( !*((_BYTE *)this + 180) || !byte_112417B4 )
        {
          switch ( *(_DWORD *)a2 )
          {
            case 1:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 88))(
                *((_DWORD *)this + 4),
                v3,
                **((unsigned __int8 **)a2 + 15));
              break;
            case 2:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 104))(
                *((_DWORD *)this + 4),
                v3,
                **((_DWORD **)a2 + 15));
              break;
            case 3:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 120))(
                *((_DWORD *)this + 4),
                v3,
                **((float **)a2 + 15));
              break;
            case 5:
              v4 = (float *)*((_DWORD *)a2 + 15);
              v11 = v4[1];
              v9 = v4[2];
              v8 = *((_DWORD *)this + 4);
              v10[0] = *v4;
              v10[1] = v11;
              v10[2] = v9;
              v10[3] = 1.0;
              (*(void (__stdcall **)(int, int, float *))(*(_DWORD *)v8 + 136))(v8, v3, v10);
              break;
            case 6:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 136))(
                *((_DWORD *)this + 4),
                v3,
                *((_DWORD *)a2 + 15));
              break;
            case 7:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 152))(
                *((_DWORD *)this + 4),
                v3,
                *((_DWORD *)a2 + 15));
              break;
            case 9:
              v5 = (Texture *)*((_DWORD *)a2 + 15);
              if ( *((_DWORD *)v5 + 6) != -1 )
              {
                v6 = **((_DWORD **)this + 4);
                Texture = Texture::GetTexture(v5);
                (*(void (__stdcall **)(_DWORD, _DWORD, struct IDirect3DTexture9 *))(v6 + 208))(
                  *((_DWORD *)this + 4),
                  *((_DWORD *)a2 + 17),
                  Texture);
              }
              break;
            case 0xA:
              (*(void (__stdcall **)(_DWORD, int, _DWORD))(**((_DWORD **)this + 4) + 208))(
                *((_DWORD *)this + 4),
                v3,
                *((_DWORD *)a2 + 15));
              break;
            default:
              return;
          }
        }
      }
    }
  }
}
