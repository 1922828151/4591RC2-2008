/*
 * func-name: ?Load@ActorGroup@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAVWorld@@@Z
 * func-address: 0x1010ae70
 * callers: 0x1010b430, 0x1010bc60
 * callees: 0x1010a6c0, 0x1010ab60, 0x1017a2d0, 0x1017a310, 0x1017a610
 */

char __thiscall ActorGroup::Load(
        struct ActorGroup *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        struct World *a9)
{
  int v10; // eax
  int v11; // eax
  int *i; // esi
  int v13; // ebp
  char v15; // bl
  char v16; // [esp-20h] [ebp-74h] BYREF
  int v17; // [esp-1Ch] [ebp-70h]
  int v18; // [esp-18h] [ebp-6Ch]
  int v19; // [esp-14h] [ebp-68h]
  int v20; // [esp-10h] [ebp-64h]
  int v21; // [esp-Ch] [ebp-60h]
  int v22; // [esp-8h] [ebp-5Ch]
  struct World *v23; // [esp-4h] [ebp-58h]
  _BYTE v24[28]; // [esp+10h] [ebp-44h] BYREF
  int v25[7]; // [esp+2Ch] [ebp-28h] BYREF
  int v26; // [esp+50h] [ebp-4h]

  v26 = 0;
  std::string::string(v24);
  LOBYTE(v26) = 1;
  v10 = sub_1017A2D0(v25, &a2);
  LOBYTE(v26) = 2;
  std::string::operator=(v24, v10);
  LOBYTE(v26) = 1;
  std::string::~string(v25);
  v11 = sub_1017A310(v25, v24);
  LOBYTE(v26) = 3;
  std::string::operator=(v24, v11);
  LOBYTE(v26) = 1;
  std::string::~string(v25);
  sub_1017A610(v24);
  for ( i = *(int **)dword_1124150C; ; i = (int *)*i )
  {
    v13 = dword_1124150C;
    if ( !&ActorGroup::m_listStaticList )
      invalid_parameter_noinfo();
    if ( i == (int *)v13 )
    {
      v23 = a9;
      a9 = (struct World *)&v16;
      std::string::string(&v16, &a2);
      v15 = ActorGroup::LoadFromFile(this, v16, v17, v18, v19, v20, v21, v22, v23);
      LOBYTE(v26) = 0;
      std::string::~string(v24);
      v26 = -1;
      std::string::~string(&a2);
      return v15;
    }
    if ( !&ActorGroup::m_listStaticList )
      invalid_parameter_noinfo();
    if ( i == (int *)dword_1124150C )
      invalid_parameter_noinfo();
    if ( (unsigned __int8)std::operator==<char>(i[2] + 16, v24) )
      break;
    if ( i == (int *)dword_1124150C )
      invalid_parameter_noinfo();
  }
  if ( i == (int *)dword_1124150C )
    invalid_parameter_noinfo();
  ActorGroup::Clone((ActorGroup *)i[2], this, a9);
  LOBYTE(v26) = 0;
  std::string::~string(v24);
  v26 = -1;
  std::string::~string(&a2);
  return 1;
}
