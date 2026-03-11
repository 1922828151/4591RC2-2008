/*
 * func-name: sub_1007EED0
 * func-address: 0x1007eed0
 * callers: 0x1008c3e0, 0x1008ce00, 0x1015e240
 * callees: 0x100971c0
 */

float *__cdecl sub_1007EED0(float *a1)
{
  HWND v1; // esi
  float *result; // eax
  struct tagPOINT Point; // [esp+8h] [ebp-18h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-10h] BYREF

  GetCursorPos(&Point);
  v1 = (HWND)*((_DWORD *)Engine::Instance() + 35);
  GetClientRect(v1, &Rect);
  ClientToScreen(v1, (LPPOINT)&Rect);
  ClientToScreen(v1, (LPPOINT)&Rect.right);
  Point.x -= Rect.left;
  result = a1;
  Point.y -= Rect.top;
  *a1 = (float)Point.x;
  a1[1] = (float)Point.y;
  return result;
}
