//#include <iostream>
//#include <exception>
//#include <string>
//using namespace std;
//
//string AskTimeServer() {
//    /* Для тестирования повставляйте сюда код, реализующий различное поведение этой функии:
//       * нормальный возврат строкового значения
//       * выброс исключения system_error
//       * выброс другого исключения с сообщением.
//    */
//}
//
//class TimeServer {
//public:
//    string GetCurrentTime() {
//    	try {
//    		LastFetchedTime=AskTimeServer();
//    		return LastFetchedTime;
//    	} catch (system_error& sys_error) {
//    		return LastFetchedTime;
//    		/* Обработчик исключения. */
//    	} catch (...){
//    		throw;
//    	}
//    }
//
//private:
//    string LastFetchedTime = "00:00:00";
//};
//
//int main() {
//    // Меняя реализацию функции AskTimeServer, убедитесь, что это код работает корректно
//    TimeServer ts;
//    try {
//        cout << ts.GetCurrentTime() << endl;
//    } catch (exception& e) {
//        cout << "Exception got: " << e.what() << endl;
//    }
//    return 0;
//}
