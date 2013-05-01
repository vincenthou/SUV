(function(){
    var path = {};
    path.BASE_URL = '/SUV/web/index.php';
    path.POST_PATH = path.BASE_URL + '/post/index/';
    path.ADMIN_PATH = path.BASE_URL + '/admin/index/';

    if ('undefined' === typeof(SUV)) {
        SUV = {};
    }
    SUV.path = path;
})();