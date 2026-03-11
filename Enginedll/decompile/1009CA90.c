/*
 * func-name: ?Load@CVideoManager@@QAEHPBDHHHH@Z
 * func-address: 0x1009ca90
 * callers: none
 * callees: 0x100971c0, 0x1009be80, 0x1009ceb0, 0x101a2534
 */

int __thiscall CVideoManager::Load(CVideoManager *this, LPCCH lpMultiByteStr, int a3, int a4, LONG a5, LONG a6)
{
  int *v6; // esi
  int v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ebx
  int v10; // edi
  struct Engine *v11; // eax
  struct CVideoManager::tShowInfo *Info; // eax
  int v13; // eax
  LONG right; // eax
  LONG bottom; // ecx
  struct Engine *v16; // eax
  int v18; // [esp+74h] [ebp-218h] BYREF
  CVideoManager *v19; // [esp+78h] [ebp-214h]
  struct tagRECT Rect; // [esp+7Ch] [ebp-210h] BYREF
  WCHAR WideCharStr[256]; // [esp+8Ch] [ebp-200h] BYREF

  ++dword_102879EC;
  v19 = this;
  v6 = (int *)operator new(0x24u);
  v7 = dword_102879EC;
  v6[3] = 0;
  v6[4] = 0;
  v8 = v6 + 3;
  v6[5] = 0;
  v6[6] = 0;
  v9 = v6 + 4;
  v6[7] = 0;
  v6[8] = 0;
  *((_BYTE *)v6 + 8) = 0;
  v6[1] = 100;
  v18 = (int)v6;
  *v6 = v7;
  CoCreateInstance(&rclsid, 0, 1u, &riid, (LPVOID *)v6 + 3);
  MultiByteToWideChar(0, 1u, lpMultiByteStr, -1, WideCharStr, 256);
  (*(void (__stdcall **)(_DWORD, WCHAR *, _DWORD))(*(_DWORD *)*v8 + 52))(*v8, WideCharStr, 0);
  (**(void (__stdcall ***)(_DWORD, void *, int))*v8)(*v8, &unk_102149C0, (int)(v6 + 4));
  (**(void (__stdcall ***)(_DWORD, void *, int))*v8)(*v8, &unk_102149E0, (int)(v6 + 5));
  (**(void (__stdcall ***)(_DWORD, void *, int))*v8)(*v8, &unk_102149F0, (int)(v6 + 6));
  (**(void (__stdcall ***)(_DWORD, void *, int))*v8)(*v8, &unk_102149D0, (int)(v6 + 7));
  (**(void (__stdcall ***)(_DWORD, void *, int))*v8)(*v8, &unk_102149A0, (int)(v6 + 8));
  v10 = *(_DWORD *)v6[4];
  v11 = Engine::Instance();
  (*(void (__stdcall **)(int, _DWORD))(v10 + 116))(v6[4], *((_DWORD *)v11 + 35));
  Info = CVideoManager::GetInfo(v19, *v6);
  if ( Info )
    v13 = *((_DWORD *)Info + 1);
  else
    v13 = -1;
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v6[7] + 28))(v6[7], 15 * (v13 - 100));
  (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v9 + 36))(*v9, 1140850688);
  right = a5;
  if ( !a5 || (bottom = a6) == 0 )
  {
    v16 = Engine::Instance();
    GetClientRect(*((HWND *)v16 + 35), &Rect);
    right = Rect.right;
    bottom = Rect.bottom;
  }
  (*(void (__stdcall **)(_DWORD, int, int, LONG, LONG))(*(_DWORD *)*v9 + 156))(*v9, a3, a4, right, bottom);
  sub_1009CEB0((int)v19, (int)&v18);
  return dword_102879EC;
}
