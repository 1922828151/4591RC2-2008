/*
 * func-name: ??0CDlgMgr@@IAE@XZ
 * func-address: 0x1014a2e0
 * callers: 0x1014a3e0
 * callees: 0x10001720, 0x100971c0, 0x100ced70, 0x1017c0d0
 */

CDlgMgr *__thiscall CDlgMgr::CDlgMgr(CDlgMgr *this)
{
  char *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  char v6; // [esp-38h] [ebp-5Ch] BYREF
  int v7; // [esp-34h] [ebp-58h]
  int v8; // [esp-30h] [ebp-54h]
  int v9; // [esp-2Ch] [ebp-50h]
  int v10; // [esp-28h] [ebp-4Ch]
  int v11; // [esp-24h] [ebp-48h]
  void *v12; // [esp-20h] [ebp-44h]
  char v13; // [esp-1Ch] [ebp-40h] BYREF
  int v14; // [esp-18h] [ebp-3Ch]
  int v15; // [esp-14h] [ebp-38h]
  int v16; // [esp-10h] [ebp-34h]
  int v17; // [esp-Ch] [ebp-30h]
  int v18; // [esp-8h] [ebp-2Ch]
  int v19; // [esp-4h] [ebp-28h]
  CDlgMgr *v20; // [esp+Ch] [ebp-18h]
  char *v21; // [esp+10h] [ebp-14h]
  char *v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+20h] [ebp-4h]

  v2 = (char *)this + 8;
  v20 = this;
  *(_DWORD *)this = &CDlgMgr::`vftable';
  v3 = sub_100CED70();
  *((_DWORD *)v2 + 1) = v3;
  *((_BYTE *)v3 + 21) = 1;
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 4) = *((_DWORD *)v2 + 1);
  **((_DWORD **)v2 + 1) = *((_DWORD *)v2 + 1);
  *(_DWORD *)(*((_DWORD *)v2 + 1) + 8) = *((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 2) = 0;
  v23 = 0;
  v4 = sub_100CED70();
  *((_DWORD *)this + 7) = v4;
  *((_BYTE *)v4 + 21) = 1;
  *(_DWORD *)(*((_DWORD *)this + 7) + 4) = *((_DWORD *)this + 7);
  **((_DWORD **)this + 7) = *((_DWORD *)this + 7);
  *(_DWORD *)(*((_DWORD *)this + 7) + 8) = *((_DWORD *)this + 7);
  *((_DWORD *)this + 8) = 0;
  XMLSystem::XMLSystem((CDlgMgr *)((char *)this + 36));
  v21 = &v13;
  v12 = &unk_101CC927;
  LOBYTE(v23) = 2;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 129) = 0;
  *((_DWORD *)this + 34) = 0;
  std::string::string(&v13, v12);
  v22 = &v6;
  LOBYTE(v23) = 3;
  std::string::string(&v6, "ReportError");
  LOBYTE(v23) = 4;
  Engine::Instance();
  LOBYTE(v23) = 2;
  *((_BYTE *)this + 4) = sub_1017C0D0(v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19);
  return this;
}
