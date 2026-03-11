/*
 * func-name: ?OnCreateDevice@CREDialogResourceManager@@IAEJPAUIDirect3DDevice9@@@Z
 * func-address: 0x100af790
 * callers: none
 * callees: 0x1006ad40, 0x100971c0, 0x100a9db0, 0x100a9e80, 0x10178146
 */

int __thiscall CREDialogResourceManager::OnCreateDevice(CREDialogResourceManager *this, struct IDirect3DDevice9 *a2)
{
  unsigned int v3; // edi
  bool v4; // cc
  int result; // eax
  unsigned int v6; // edi
  struct Engine *v7; // eax
  struct Engine *v8; // eax

  v3 = 0;
  v4 = *((_DWORD *)this + 6) <= 0;
  *((_DWORD *)this + 8) = a2;
  if ( v4 )
  {
LABEL_4:
    v6 = 0;
    if ( *((int *)this + 3) <= 0 )
    {
LABEL_7:
      result = D3DXCreateSprite(a2, (char *)this + 4);
      if ( result >= 0 )
      {
        v7 = Engine::Instance();
        CREIMEEditBox::s_hImcDef = (int)CREIMEEditBox::_ImmGetContext(*((void **)v7 + 35));
        v8 = Engine::Instance();
        CMLIMEEditBox::s_hImcDef = (int)CMLIMEEditBox::_ImmGetContext(*((void **)v8 + 35));
        return 0;
      }
    }
    else
    {
      while ( 1 )
      {
        result = CREDialogResourceManager::CreateTexture(this, v6);
        if ( result < 0 )
          break;
        if ( (signed int)++v6 >= *((_DWORD *)this + 3) )
          goto LABEL_7;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      result = CREDialogResourceManager::CreateFontW(this, v3, -1.0);
      if ( result < 0 )
        break;
      if ( (signed int)++v3 >= *((_DWORD *)this + 6) )
        goto LABEL_4;
    }
  }
  return result;
}
