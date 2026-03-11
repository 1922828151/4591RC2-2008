/*
 * func-name: ?OnFocusIn@CMLIMEEditBox@@UAEXXZ
 * func-address: 0x100af1f0
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1007e540, 0x1007e670, 0x100971c0, 0x100a7ea0, 0x100d6d20
 */

void __thiscall CMLIMEEditBox::OnFocusIn(CMLIMEEditBox *this)
{
  struct GUISystem *v2; // eax
  CRETimer *v3; // eax
  struct Engine *v4; // eax
  struct Engine *v5; // eax
  struct Engine *v6; // eax
  const int *Context; // eax
  struct Engine *v8; // eax
  int v9; // [esp-4h] [ebp-4h]
  int v10; // [esp-4h] [ebp-4h]

  *((_BYTE *)this + 92) = 1;
  CREDialog::s_pControlFocus = this;
  v2 = GUISystem::Instance();
  (*(void (__thiscall **)(struct GUISystem *, int))(*(_DWORD *)v2 + 40))(v2, 1);
  *((_BYTE *)this + 92) = 1;
  *((_BYTE *)this + 744) = 1;
  v3 = REGetGlobalTimer();
  *((double *)this + 92) = CRETimer::GetAbsoluteTime(v3);
  if ( CMLIMEEditBox::s_bEnableImeSystem )
  {
    v9 = CMLIMEEditBox::s_hImcDef;
    v4 = Engine::Instance();
    CMLIMEEditBox::_ImmAssociateContext(*((HIMC *)v4 + 35), v9);
    CMLIMEEditBox::CheckToggleState();
  }
  else
  {
    v5 = Engine::Instance();
    CMLIMEEditBox::_ImmAssociateContext(*((HIMC *)v5 + 35), 0);
  }
  v6 = Engine::Instance();
  Context = CMLIMEEditBox::_ImmGetContext(*((void **)v6 + 35));
  if ( Context )
  {
    if ( !CMLIMEEditBox::s_bEnableImeSystem )
      CMLIMEEditBox::s_ImeState = 0;
    v10 = (int)Context;
    v8 = Engine::Instance();
    CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v8 + 35), v10);
    CMLIMEEditBox::CheckToggleState();
  }
}
