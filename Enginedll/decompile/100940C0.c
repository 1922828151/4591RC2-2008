/*
 * func-name: sub_100940C0
 * func-address: 0x100940c0
 * callers: 0x1000c620
 * callees: 0x100923c0
 */

int __thiscall sub_100940C0(int this)
{
  HWND ForegroundWindow; // eax
  LONG right; // ecx
  double v4; // st7
  LONG bottom; // edx
  int result; // eax
  float v7; // [esp+4h] [ebp-1Ch]
  float v8; // [esp+8h] [ebp-18h]
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  sub_100923C0(this);
  *(float *)(this + 340) = 0.0;
  *(float *)(this + 352) = 0.0;
  *(float *)(this + 344) = 0.0;
  *(float *)(this + 348) = 0.0;
  *(float *)(this + 356) = 0.0;
  *(float *)(this + 360) = 0.0;
  ForegroundWindow = GetForegroundWindow();
  GetClientRect(ForegroundWindow, &Rect);
  right = Rect.right;
  *(float *)(this + 288) = 0.89999998;
  v4 = (double)Rect.right;
  bottom = Rect.bottom;
  *(_DWORD *)(this + 272) = right;
  *(_DWORD *)(this + 276) = bottom;
  v7 = v4 * 0.5;
  *(float *)(this + 280) = v7;
  result = this;
  v8 = 0.5 * (double)Rect.bottom;
  *(float *)(this + 284) = v8;
  return result;
}
