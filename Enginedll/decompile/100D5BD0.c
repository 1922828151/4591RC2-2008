/*
 * func-name: ?GetLogicMousePos@GUISystem@@QAEXAAUtagPOINT@@@Z
 * func-address: 0x100d5bd0
 * callers: 0x100a4140, 0x100afae0, 0x100b27b0, 0x100bb510, 0x100bc680, 0x100bca20, 0x100bcdf0, 0x100d64b0, 0x101548e0, 0x10156140
 * callees: 0x101189f0, 0x101a26c0
 */

void __thiscall GUISystem::GetLogicMousePos(GUISystem *this, struct tagPOINT *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  float v5; // [esp+8h] [ebp-18h]
  float v6; // [esp+Ch] [ebp-14h]
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 46) )
  {
    *a2 = *(struct tagPOINT *)((char *)this + 36);
  }
  else
  {
    GetClientRect(*((HWND *)this + 8), &Rect);
    v5 = (float)(Rect.right - Rect.left);
    v6 = (float)(Rect.bottom - Rect.top);
    v3 = RenderDevice::Instance();
    a2->x = (int)((double)(*((_DWORD *)this + 9)
                         * (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 296))(v3))
                / v5);
    v4 = RenderDevice::Instance();
    a2->y = (int)((double)(*((_DWORD *)this + 10)
                         * (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 300))(v4))
                / v6);
  }
}
