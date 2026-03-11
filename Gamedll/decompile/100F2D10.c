/*
 * func-name: ?RenderBefore@AdapterActor@GameClient@@UAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x100f2d10
 * callers: 0x1000434f
 * callees: none
 */

void __thiscall GameClient::AdapterActor::RenderBefore(
        GameClient::AdapterActor *this,
        struct Shader *a2,
        struct Material *a3)
{
  int v4; // eax
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // eax
  struct Shader *Effect; // edi
  int v9; // eax
  int v10; // eax
  void (__stdcall **v11)(struct Shader *); // edi
  int i; // [esp+14h] [ebp-8h]
  char *retaddr; // [esp+1Ch] [ebp+0h]

  v4 = *((_DWORD *)this + 305);
  v5 = 0;
  if ( v4 && (*((_DWORD *)this + 306) - v4) / 36 )
  {
    for ( i = 0; ; i += 36 )
    {
      v6 = *((_DWORD *)this + 305);
      if ( !v6 || v5 >= (*((_DWORD *)this + 306) - v6) / 36 )
        break;
      v7 = *((_DWORD *)this + 305);
      if ( !v7 || v5 >= (*((_DWORD *)this + 306) - v7) / 36 )
        _invalid_parameter_noinfo();
      if ( a3 == *(struct Material **)(i + *((_DWORD *)this + 305)) )
      {
        Effect = Shader::GetEffect(a2);
        v9 = *((_DWORD *)this + 305);
        a2 = Effect;
        if ( !v9 || v5 >= (*((_DWORD *)this + 306) - v9) / 36 )
          _invalid_parameter_noinfo();
        v10 = *((_DWORD *)this + 305);
        if ( !v10 || v5 >= (*((_DWORD *)this + 306) - v10) / 36 )
          _invalid_parameter_noinfo();
        v11 = (void (__stdcall **)(struct Shader *))(*(_DWORD *)Effect + 120);
        std::string::c_str(&retaddr[*((_DWORD *)this + 305) + 4]);
        (*v11)(a2);
      }
      ++v5;
    }
  }
}
