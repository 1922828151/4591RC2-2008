/*
 * func-name: ?Save@Serializer@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@3@@Z
 * func-address: 0x1011b2a0
 * callers: 0x10083680
 * callees: 0x10010930, 0x100977a0, 0x100e2550, 0x1011abe0, 0x1017aa70, 0x101a2500
 */

char __stdcall Serializer::Save(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8)
{
  ISave *Saver; // esi
  const char *v9; // eax
  int v11; // [esp-8h] [ebp-34h] BYREF
  int v12; // [esp-4h] [ebp-30h] BYREF
  int v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+4h] [ebp-28h]
  int v15; // [esp+8h] [ebp-24h]
  int v16; // [esp+Ch] [ebp-20h]
  int v17; // [esp+10h] [ebp-1Ch]
  int *v18; // [esp+14h] [ebp-18h]
  int *v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+28h] [ebp-4h]

  v20 = 0;
  sub_1017AA70();
  LogPrintf("Saving Selected...");
  v19 = &v12;
  std::string::string(&v12, &a1);
  Saver = Serializer::GetSaver(v12, v13, v14, v15, v16, v17, (int)v18);
  if ( Saver )
  {
    v18 = a8;
    a8 = &v11;
    std::string::string(&v11, &a1);
    (*(void (__thiscall **)(ISave *, int, int, int, int, int, int, int, int *))(*(_DWORD *)Saver + 8))(
      Saver,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    ISave::~ISave(Saver);
    operator delete(Saver);
    LogPrintf("..Saved");
    v20 = -1;
    std::string::~string(&a1);
    return 1;
  }
  else
  {
    v9 = (const char *)std::string::c_str(&a1);
    SeriousWarning("No compatible Save serializer for '%s' items.", v9);
    v20 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
