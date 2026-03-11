/*
 * func-name: sub_10001DB0
 * func-address: 0x10001db0
 * callers: 0x10001f60
 * callees: 0x10001d40, 0x10019750
 */

INT_PTR __stdcall sub_10001DB0(HWND hDlg, UINT a2, WPARAM a3, LPARAM a4)
{
  int v4; // eax
  int v6; // eax
  int v7; // [esp-Ch] [ebp-70h] BYREF
  int v8; // [esp-8h] [ebp-6Ch]
  int v9; // [esp-4h] [ebp-68h]
  int v10; // [esp+0h] [ebp-64h]
  int v11; // [esp+4h] [ebp-60h]
  int v12; // [esp+8h] [ebp-5Ch]
  int v13; // [esp+Ch] [ebp-58h]
  int *v14; // [esp+18h] [ebp-4Ch]
  int v15[7]; // [esp+1Ch] [ebp-48h] BYREF
  int v16[7]; // [esp+38h] [ebp-2Ch] BYREF
  int v17; // [esp+60h] [ebp-4h]

  switch ( a2 )
  {
    case 0x10u:
      sub_10001D40((int)v16, hDlg, 1001);
      v14 = &v7;
      v17 = 0;
      std::string::string(&v7, v16);
      LOBYTE(v17) = 1;
      v6 = Engine::Instance(v7, v8, v9, v10, v11, v12, v13);
      if ( (unsigned __int8)Engine::ValidateSerial(v6) )
        EndDialog(hDlg, (unsigned __int16)a3);
      else
        MessageBoxA(hDlg, "Serial number is invalid. Please try again", "Invalid serial", 0x10u);
      v17 = -1;
      std::string::~string(v16);
      return 1;
    case 0x110u:
      SetDlgItemTextA(hDlg, 1002, lpString);
      return 1;
    case 0x111u:
      if ( (_WORD)a3 == 1 )
      {
        sub_10001D40((int)v15, hDlg, 1001);
        v14 = &v7;
        v17 = 2;
        std::string::string(&v7, v15);
        LOBYTE(v17) = 3;
        v4 = Engine::Instance(v7, v8, v9, v10, v11, v12, v13);
        if ( (unsigned __int8)Engine::ValidateSerial(v4) )
          EndDialog(hDlg, 1);
        else
          MessageBoxA(hDlg, "Serial number is invalid. Please try again", "Invalid serial", 0x10u);
        v17 = -1;
        std::string::~string(v15);
      }
      else if ( (_WORD)a3 == 2 )
      {
        EndDialog(hDlg, 2);
        exit(0);
      }
      break;
  }
  return 0;
}
