/*
 * func-name: ?RemoveCallback@RenderCallbackManager@@QAEXPAVRenderBase@@@Z
 * func-address: 0x1001f570
 * callers: 0x10118a60
 * callees: 0x10076ef0
 */

void __thiscall RenderCallbackManager::RemoveCallback(RenderCallbackManager *this, struct RenderBase *a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax

  v3 = 0;
  if ( ((int (*)(void))std::vector<Model *>::size)() )
  {
    while ( 1 )
    {
      v4 = *((_DWORD *)this + 1);
      if ( !v4 || v3 >= (*((_DWORD *)this + 2) - v4) >> 2 )
        invalid_parameter_noinfo();
      v5 = *((_DWORD *)this + 1);
      if ( a2 == *(struct RenderBase **)(v5 + 4 * v3) )
        break;
      if ( ++v3 >= std::vector<Model *>::size(this) )
        return;
    }
    v6 = *((_DWORD *)this + 1);
    if ( v5 > *((_DWORD *)this + 2) )
      invalid_parameter_noinfo();
    v7 = v6 + 4 * v3;
    if ( v7 > *((_DWORD *)this + 2) || v7 < *((_DWORD *)this + 1) )
      invalid_parameter_noinfo();
    v8 = (int)(*((_DWORD *)this + 2) - (v7 + 4)) >> 2;
    if ( v8 > 0 )
      memmove_s((void *const)v7, 4 * v8, (const void *const)(v7 + 4), 4 * v8);
    *((_DWORD *)this + 2) -= 4;
  }
}
