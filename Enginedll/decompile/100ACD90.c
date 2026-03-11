/*
 * func-name: ?OnFocusIn@CREIMEEditBox@@UAEXXZ
 * func-address: 0x100acd90
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1007e540, 0x1007e670, 0x100971c0, 0x100a4950, 0x100d6d20
 */

void __thiscall CREIMEEditBox::OnFocusIn(CREIMEEditBox *this)
{
  struct GUISystem *v2; // eax
  CRETimer *v3; // eax
  struct Engine *v4; // eax
  struct Engine *v5; // eax
  struct Engine *v6; // eax
  const int *Context; // eax
  struct Engine *v8; // eax
  HIMC v9; // [esp-4h] [ebp-4h]
  int v10; // [esp-4h] [ebp-4h]

  *((_BYTE *)this + 92) = 1;
  CREDialog::s_pControlFocus = this;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v2 + 40))(v2, 1);
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 744) = 1;
  v3 = REGetGlobalTimer();
  *((double *)this + 92) = CRETimer::GetAbsoluteTime(v3);
  if ( CREIMEEditBox::s_bEnableImeSystem )
  {
    v9 = (HIMC)CREIMEEditBox::s_hImcDef;
    v4 = Engine::Instance();
    CREIMEEditBox::_ImmAssociateContext(*((HWND *)v4 + 35), v9);
    CREIMEEditBox::CheckToggleState();
  }
  else
  {
    v5 = Engine::Instance();
    CREIMEEditBox::_ImmAssociateContext(*((HWND *)v5 + 35), 0);
  }
  v6 = Engine::Instance();
  Context = CREIMEEditBox::_ImmGetContext(*((void **)v6 + 35));
  if ( Context )
  {
    if ( !CREIMEEditBox::s_bEnableImeSystem )
      CREIMEEditBox::s_ImeState = 0;
    v10 = (int)Context;
    v8 = Engine::Instance();
    CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v8 + 35), v10);
    CREIMEEditBox::CheckToggleState();
  }
}
