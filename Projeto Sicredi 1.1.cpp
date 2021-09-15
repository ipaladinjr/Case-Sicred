// Nome do Arquivo: Projeto Sicredi.cpp
// Autor: Ivan Paladin Junior
// Finalidade: Opção no App do banco para sacar dinheiro por reconhecimento de QR Code
// Data de Criação: 11/09/2021

// Includes necessarias para realizar
// reconhecimento do QR Code.

//#include <opencv2/objdetect.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui/highgui.hpp>
//#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <string>
#include <conio.h>

//using namespace cv;
using namespace std;

// Função que constroi a caixa que ira ficar
// em volta do QR Code Detectado
//void CaixaDetectaQR(Mat &im, Mat &bbox)
//{
// int n = bbox.rows;
// for (int i = 0; i < n; i++)
// {
//   line(im, Point2i(bbox.at<float>(i, 0), bbox.at<float>(i, 1)), Point2i(bbox.at<float>((i + 1) % n, 0), bbox.at<float>((i + 1) % n, 1)), Scalar(255, 0, 0), 3);
// }
// imshow("Resultado", im);
//}

int main(int argc, char *argv[])
{
  int tomaAcao, p;
  double saldo, valor;
  saldo = 954.32; // Exemplo de saldo
  cout << "\n\tBem vindo ao Saque Rapido Sicredi\n";
  cout << "\n Menu:\n";
  cout << " 1 - Realizar Saque com QR\n";
  cout << " 2 - Sair\n";
  cout << "\nDigite a opcao desejada: ";
  cin >> tomaAcao;
  // Esse Switch não existiria, no lugar do mesmo iria aparecer um campo para o cliente informar quanto ele deseja sacar e o botão de Voltar/Sair.
  switch (tomaAcao)
  {
  case 1:
  {
    cout << "Informe o valor(R$) a ser sacado: " << endl;
    cin >> valor;
    cout << "Por favor escaneie o QR Code mostrado no caixa eletronico" << endl;
    p = getch();
    // Le o Qr Code
    //    Mat inputImage;
    //   if (argc > 1)
    //    inputImage = imread(argv[1]);
    //  QRCodeDetector qrDecoder = QRCodeDetector::QRCodeDetector();

    //    Mat bbox, rectifiedImage;
    // DataQr armazena os dados do QR Code, nesse caso seria o endereço do
    //caixa eletronico que ira efetuar o processo de saque
    //  std::string DataQr = qrDecoder.detectAndDecode(inputImage, bbox, rectifiedImage);
    string DataQr = "CXSC71236267213";
    // Esse if verificaria se o QR foi lido e se o mesmo contem o mesmo numero atribuido ao caixa eletronico que ira ser realizado o saque.
    if (DataQr.length() > 0)
    { // Apos a verificação o processo de atualização de saldo iria iniciar.
      cout << "Enviando dados do cliente para o caixa eletronico..." << endl;
      p = getch();
      saldo = saldo - valor;
      cout << "Saldo Atualizado: " << saldo << endl;
    }
  }
  case 2:
  {
    cout << "Finalizando operacao." << endl;
    break;
  }
  default:
  {
    cout << "Acao informada invalida" << endl;
  }
  }
  return 0;
}
