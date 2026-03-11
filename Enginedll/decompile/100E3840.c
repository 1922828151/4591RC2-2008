/*
 * func-name: ?ReloadTechniques@Material@@AAEXXZ
 * func-address: 0x100e3840
 * callers: 0x100e3c20
 * callees: 0x1000a280, 0x1001b610, 0x100e35c0
 */

void __thiscall Material::ReloadTechniques(Material *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD *v11; // [esp+4h] [ebp-70h]
  _DWORD v12[6]; // [esp+8h] [ebp-6Ch] BYREF
  _BYTE v13[28]; // [esp+20h] [ebp-54h] BYREF
  _BYTE v14[44]; // [esp+3Ch] [ebp-38h] BYREF
  int v15; // [esp+70h] [ebp-4h]

  v2 = *((_DWORD *)this + 38);
  if ( v2 )
  {
    v3 = *(_DWORD **)(v2 + 16);
    v11 = v3;
    if ( v3 )
    {
      v4 = 0;
      if ( std::vector<EditorVar>::size(this) )
      {
        v5 = 0;
        while ( 1 )
        {
          v6 = *((_DWORD *)this + 1);
          if ( !v6 || v4 >= (*((_DWORD *)this + 2) - v6) / 96 )
            invalid_parameter_noinfo();
          sub_1001B610(v12, v5 + *((_DWORD *)this + 1));
          v7 = *v3;
          v15 = 0;
          v8 = std::string::c_str(v14);
          v9 = (*(int (__stdcall **)(_DWORD *, int))(v7 + 52))(v11, v8);
          if ( v9 )
          {
            v10 = *((_DWORD *)this + 1);
            if ( !v10 || v4 >= (*((_DWORD *)this + 2) - v10) / 96 )
              invalid_parameter_noinfo();
            *(_DWORD *)(*((_DWORD *)this + 1) + v5) = v9;
            *((_DWORD *)this + 54) = v9;
          }
          v15 = 1;
          std::string::~string(v14);
          v15 = -1;
          std::string::~string(v13);
          ++v4;
          v5 += 96;
          if ( v4 >= std::vector<EditorVar>::size(this) )
            break;
          v3 = v11;
        }
      }
      Material::UpdateStates(this);
    }
  }
}
