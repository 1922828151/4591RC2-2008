/*
 * func-name: ?Clone@Effect_TraceLineSystem@@UAEXPAVActor@@_N@Z_0
 * func-address: 0x1009bb60
 * callers: 0x10005c8b
 * callees: 0x1000e7f5
 */

void __thiscall Effect_TraceLineSystem::Clone(Effect_TraceLineSystem *this, struct Actor *a2, bool a3)
{
  int v4; // ecx
  unsigned int v5; // ecx
  double v6; // st6
  void *v7; // eax
  Editor *v8; // eax
  _DWORD v9[7]; // [esp-18h] [ebp-48h] BYREF
  int v10; // [esp+4h] [ebp-2Ch]
  float v11; // [esp+8h] [ebp-28h]
  float v12; // [esp+Ch] [ebp-24h]
  float v13; // [esp+10h] [ebp-20h]
  float v14; // [esp+14h] [ebp-1Ch]
  float v15; // [esp+18h] [ebp-18h]
  int v16; // [esp+1Ch] [ebp-14h]
  __int64 v17; // [esp+28h] [ebp-8h]

  Actor::Clone(this, a2, a3);
  *((_BYTE *)a2 + 1104) = *((_BYTE *)this + 1104);
  *((_DWORD *)a2 + 277) = *((_DWORD *)this + 277);
  *((_DWORD *)a2 + 278) = *((_DWORD *)this + 278);
  *((_DWORD *)a2 + 279) = *((_DWORD *)this + 279);
  *((_DWORD *)a2 + 280) = *((_DWORD *)this + 280);
  *((_BYTE *)a2 + 1124) = *((_BYTE *)this + 1124);
  *((float *)a2 + 282) = *((float *)this + 282);
  *((float *)a2 + 283) = *((float *)this + 283);
  *((float *)a2 + 284) = *((float *)this + 284);
  *((float *)a2 + 285) = *((float *)this + 285);
  *((float *)a2 + 286) = *((float *)this + 286);
  *((float *)a2 + 287) = *((float *)this + 287);
  *((float *)a2 + 288) = *((float *)this + 288);
  *((float *)a2 + 289) = *((float *)this + 289);
  *((float *)a2 + 290) = *((float *)this + 290);
  *((float *)a2 + 291) = *((float *)this + 291);
  *((float *)a2 + 292) = *((float *)this + 292);
  *((float *)a2 + 293) = *((float *)this + 293);
  *((float *)a2 + 294) = *((float *)this + 294);
  *((float *)a2 + 295) = *((float *)this + 295);
  v17 = (__int64)(*((float *)this + 275) * 255.0);
  v4 = (_DWORD)v17 << 8;
  v17 = (__int64)(*((float *)this + 272) * 255.0);
  v5 = ((unsigned int)v17 | v4) << 8;
  v6 = *((float *)this + 273) * 255.0;
  v17 = (__int64)v6;
  v16 = 0;
  v17 = (__int64)(255.0 * *((float *)this + 274));
  *((_DWORD *)a2 + 296) = v17 | (((unsigned int)(__int64)v6 | v5) << 8);
  v7 = (void *)(*((_DWORD *)this + 297) + 100);
  v15 = 0.0;
  v14 = 1.0;
  v13 = 1.0;
  v12 = 0.0;
  v11 = 0.0;
  v10 = 0;
  std::string::string(v9, v7);
  Texture::Load(
    *((_DWORD *)a2 + 297),
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v10,
    LODWORD(v11),
    LODWORD(v12),
    LODWORD(v13),
    LODWORD(v14),
    LODWORD(v15),
    v16);
  *((_BYTE *)a2 + 1192) = *((_BYTE *)this + 1192);
  *((_DWORD *)a2 + 299) = *((_DWORD *)this + 299);
  *((float *)a2 + 300) = *((float *)this + 300);
  *((_BYTE *)a2 + 1204) = *((_BYTE *)this + 1204);
  *((_BYTE *)a2 + 1205) = *((_BYTE *)this + 1205);
  *((float *)a2 + 302) = *((float *)this + 302);
  *((float *)a2 + 303) = *((float *)this + 303);
  *((float *)a2 + 304) = *((float *)this + 304);
  *((float *)a2 + 305) = *((float *)this + 305);
  *((float *)a2 + 306) = *((float *)this + 306);
  *((_DWORD *)a2 + 307) = *((_DWORD *)this + 307);
  v8 = (Editor *)Editor::Instance();
  if ( !Editor::GetEditorMode(v8) )
    *((float *)a2 + 205) = *((float *)this + 271);
  Effect_TraceLineSystem::Refresh(a2);
}
