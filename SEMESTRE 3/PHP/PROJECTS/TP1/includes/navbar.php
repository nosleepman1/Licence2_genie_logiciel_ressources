
<head>
    <link rel="stylesheet" href="../assets/css/style.css">
</head>

<nav class="navbar navbar-expand-lg bg-body-tertiary">
            <div class="container-fluid">
                <a class="navbar-brand" href="#">Navbar</a>
                <button class="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNavAltMarkup" aria-controls="navbarNavAltMarkup" aria-expanded="false" aria-label="Toggle navigation">
                <span class="navbar-toggler-icon"></span>
                </button>
                <div class="collapse navbar-collapse" id="navbarNavAltMarkup">
                <div class="navbar-nav">
                        <?php foreach ($pages as $key => $p) : ?>
                            <a id="nav" class="nav-link <?= $active = ($p === $page) ? 'active' : '' ?>" href="?page=<?= $p ?>"> <?= ucfirst($p) ?> </a>
                         <?php endforeach ?>
                   
                </div>
                </div>
            </div>
        </nav>